# Touhou Puppet Play v2.0

![](https://repository-images.githubusercontent.com/430729681/04bd2d85-e736-42c2-bb00-c1c80e7df4c0)

This is a fork of the Pokémon Emerald Decompilation to create a modern, workable base to create Touhou Puppet Play hacks.

Due to the fragmented nature of the scene caused by several unpolished hacks along with a community made obselete by the spiritual successor, Touhou Puppet Dance Performance, much of THPP goes under the radar or is considered kusoge despite effort put into the hack. Recent developments have spiked in recent times, thankfully, and the efforts of Derxwna Kapsyla in Essentials is making slow pace, but things are still difficult with projects being completely unrelated from each other along with people losing their drive to work.

This self-declared v2.0 of Touhou Puppet Play will attempt to do the following:

* Retain all data in 1.812 as accurately as possible and import said data into the repository
* Trace any new and modernized sprites by Hemoglobin and others and attempt to expand the dex for new, diverse puppets
  * In the same vein, attempt to locate fan-made sprites for newer games and create new puppets
* Recreate new music files to reach a certain margin of polish that most hacks using said music seem to lack
* Assimilate quality of life changes that are considered beneficial
  * Including buffs and nerfs to puppets that will "unban" some and make others more easily usable (though this is something that would be deemed a community effort at low priority) 

This edit, at this point in time, will not

* Keep both Pokémon and Puppets as co-existing battlers
  * This may be an additional add-on in the future once all puppets, moves, abilities, and the movesets are in place for those taking inspiration from Faith and Prayer.
* Be completed any time soon
  * While all the assets are there, things like sprites will take quite some time to import, along with needing to figure out the structure of the decompilation

## Install

There are no releases at this time, and there are no plans to make releases until at least there is a somewhat-playable base, or a kit later on that acts as a tech demo of what is in thpuppetplay2. If you are on a Linux machine, you probably already know what you are doing. If you want to dive in on Windows 10, do the following to set up WSL1 which will let you build and interact with the repo. You do not need to manually download the repo for this, just follow the instructions to clone it instead.

1. Open Windows Powershell **as Administrator**, input the following (or paste by right clicking in the window)
    ```powershell
    dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
    ```
Then restart your computer.

2. Open the [Microsoft Store Linux Selection](https://aka.ms/wslstore) to download a Linux distro of your choice, preferably Ubuntu or Debian (we use the latter). Ignore any prompt asking for a Microsoft account, just close it if it appears. You can also install Linux through the Microsoft Store app.

3. Run WSL/your distro and it will set itself up. It will ask for a username and password. Use a super simple pass, for these purposes you do not need security. Do note that the terminal will not show the text you type.

4. You will need to update WSL. Input this, things will take a while (it will ask for your password after you do so)
    ```bash
    sudo apt update && sudo apt upgrade
    ```
You will also need the tools to work with the repo: (use apt-get instead of apt if it fails)
    ```bash
    sudo apt install build-essential binutils-arm-none-eabi git libpng-dev
    ```

5. Pick a place to store thpuppetplay2. For example, `C:\Users\<user>\Desktop\Projects` will work. Do not make a folder for thpuppetplay2, it will be made for you. ChangeDirectory to your location like so with `<user>` being your W10 user name.
    ```bash
    cd "/mnt/c/Users/<user>/Desktop/Projects"
    ```
Then, get thpuppetplay2 installed.
    ```bash
    git clone https://github.com/Fatih120/thpuppetplay2
    ```

6. thpuppetplay2 is now in its own folder. Now run the following one at a time; these are for getting a set of required tools into your workspace.
    ```bash
    git clone https://github.com/pret/agbcc
    cd agbcc
    ./build.sh
    ./install.sh ../thpuppetplay2
    ```

7. You are done installation, if the following works. When you want to output a .gba ROM of the project, cd back into the thpuppetplay2 root folder. You can do the full path whenever you restart the terminal:
    ```bash
    cd /mnt/c/Users/<user>/Desktop/Projects/thpuppetplay2
    ```
next...
    ```bash
    make```
and wait patiently for the compilation. You can build slightly faster by doing `nproc` and then doing `make -j#` replacing the pound with the number you see. If you modify most graphics and sound you will have to delete the processed/compressed files made or do `make clean` to do that for you.

8. Optionally, get [Github Desktop](https://desktop.github.com/) to faciliate easy pulling of updates and pushing of changes, as well as having a visual aid for changes and un-doing steps.

## Contributing

You are free to make pull requests, though for major commits such as overhauls, engine changes, more personal ideas, etc., it is highly recommended you join our [Discord server](https://discord.gg/VGH3EWp) in the #cooding channel so we are on the same page, or at least get in touch at Fatih™#4806. If you do join the server, please lurk moar if you decide to help, proper communication and understanding is both free and important.

### puppet.py

There is a tool in the main folder called puppet.py. As you might expect, you need python to run it, and it is to be used while in the root directory and not from elsewhere (aka cd to thpuppetplay2 first).
The usage is `puppet.py puppet <form>`, with the puppet argument being a name like "reimu" and the form optionally being one of the evolutions, like "c", "ad", so on. It can be omitted if you wish to use the main prefix-less evolution.
What this does is add all the relevant lines needed to add a puppet into the game, mitigating the amount of manual work you need to do.

------------

##Priority List:

| SSS Rank |  A Rank | B Renko  | Low  |
| :------------: | :------------: | :------------: | :------------: |
| Puppet data importing | Adding modern/new puppets | QoL things | Breeding Replacement System |
| Puppet interactions setup (movesets, levels, etc) | Gui/Strings/Sprites overhauled for the Touhou theme | Seal capture system | Elegant/Cute/Strong/Wise/Charismatic |
|  |  |  |  |