build:
	cd src && ./build.sh && \
	mkdir ../ugh && ./install.sh ../ugh && \
	cd .. && mv ugh/tools/agbcc build && rm -rf ugh

clean:
	cd src && git reset --hard && git clean -xdf
	rm -rf build
