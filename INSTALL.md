As thpuppetplay2 is nowhere near complete, it does not rely on a "ROM patch". You must build the ROM straight from the decompiled code. This file will guide you on how to do this even if you don't know about building.

If you are on a Linux machine, you probably already know what you are doing - regardless, you may skip to Step 4b and ignore the Windows-specific instructions. We do not know what Mac OS is. Windows 10 users, proceed as usual.

### WSL and Debian/Ubuntu

We will be installing the [Windows Subsystem for Linux](https://en.wikipedia.org/wiki/Windows_Subsystem_for_Linux). It is the only reliable tool for building on Widnows.

1. Open Windows Powershell **as Administrator** via the Start Menu - input the following (or paste by right clicking in the window):

    ```powershell
    dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
    ```
Then restart your computer.

2. Open the [Microsoft Store Linux Selection](https://aka.ms/wslstore) (click the link) and preferably choose Debian as your download option. Ignore and close any prompt asking for a Microsoft account. You can also install Linux through the Microsoft Store app.

3. Run WSL/your distro via the Start Menu and the terminal will do a setup. It will ask for a username and password. Use something stupidly easy - for these purposes, you probably don't need security. Do note that the terminal will not show any changes while you type.

4. You will need to update WSL after setup. Input the following command:
    ```bash
    sudo apt update && sudo apt upgrade
    ```
    It will ask for your password - input it. This command will then take a while. Next, you will need to obtain some important things to work with the repo:
    ```bash
    sudo apt-get install build-essential binutils-arm-none-eabi gdebi-core git libpng-dev
    ```

5. Pick a place to store thpuppetplay2. For example, `C:\Users\<user>\Desktop\Projects` will work. Do not make a folder for thpuppetplay2 - one will be made for you. `c`hange`d`irectory to your folder like so with `<user>` being your W10 username - if it's going somewhere else, just replace `C:/` with `/mnt/c/`.
    ```bash
    cd "/mnt/c/Users/<user>/Desktop/Projects"
    ```
	Then, get thpuppetplay2.
    ```bash
    git clone https://github.com/Fatih120/thpuppetplay2
    ```

6. Go to [this link](https://github.com/devkitPro/pacman/releases) and download devkitpro-pacman.**amd64**.deb. Move the file to your Projects (or equivalent) directory and run these one by one:
    ```bash
    sudo ln -s /proc/self/mounts /etc/mtab
    sudo gdebi devkitpro-pacman.amd64.deb
    sudo dkp-pacman -Sy
    sudo dkp-pacman -S gba-dev
    ```
	Finally, close and restart WSL (or run `source /etc/profile.d/devkit-env.sh` if native). You can now delete the .deb file.

7. If everything went fine, you are done preparations. When you want to export a .gba ROM of the current state of your project directory, `cd` back into the thpuppetplay2 root folder.
    ```bash
    cd /mnt/c/Users/<user>/Desktop/Projects/thpuppetplay2
    ```
	Next, do
    ```bash
    make
    ```
	and wait patiently for the compilation. This will take quite some time on a clean build. You can build slightly faster by doing `make -j$(nproc)` but YMMV. If you modify any graphics or sound you will have to delete the processed/compressed files manually or do `make clean` to do that for you.

P.S. Optionally, get [Github Desktop](https://desktop.github.com/) to faciliate easy pulling of updates and pushing of changes, as well as having a visual aid for changes and un-doing steps.

### Arch and Fedora

1. Obtain `libpng-devel`, `git`, and other non-Debian-specific prerequisites.

2. Open your console and run `sudo dnf install pacman`.

3. Run the following:
    ```bash
    sudo pacman-key --init
    set DEVKITPRO=/opt/devkitpro
    set DEVKITARM=/opt/devkitpro/devkitARM
    set DEVKITPPC=/opt/devkitpro/devkitPPC
    sudo pacman-key --recv BC26F752D25B92CE272E0F44F7FD5492264BB9D0 --keyserver keyserver.ubuntu.com
    sudo pacman-key --lsign BC26F752D25B92CE272E0F44F7FD5492264BB9D0
    wget https://pkg.devkitpro.org/devkitpro-keyring.pkg.tar.xz
    sudo pacman -U devkitpro-keyring.pkg.tar.xz
    ```
    You may delete the keyring tar.xz afterwards.

4. Open `/etc/pacman.conf` and append the following lines at the bottom:
    ```
    [dkp-libs]
    Server = https://pkg.devkitpro.org/packages

    [dkp-linux]
    Server = https://pkg.devkitpro.org/packages/linux/$arch/
    ```

5. Run `sudo pacman -Syu` in the console. Then, install the development packages using `sudo pacman -S gba-dev`.

You should now be able to `make` from your cloned workspace.
