# hrlibc
C library striving to have human readable functions.
# Installation
If you're on Debian, a Debian-based OS, Red Hat Enterprise Linux, Fedora, or Gentoo, just use the package for that distro provided at [the releases page](https://github.com/Goldside543/hrlibc/releases). <br> <br>

If not, follow the below guide to compile hrlibc from source. <br> <br>

First, `git clone` the repository onto your computer.
If you think you'll need to use hrlibc often, add <br> `export LD_LIBRARY_PATH=/usr/local/lib/:$LD_LIBRARY_PATH` to your .bashrc file. If not, just run it as a command before running an application using hrlibc. <br> <br>

Now, go into the `core` folder and run `make` to produce `libhrlibc.so`. Run `sudo cp libhrlibc.so /usr/local/lib/`, then `sudo cp hrlibc.h /usr/local/include/`. <br> <br>

Head back into the root folder of `hrlibc` and compile `samples/test.c` with the command <br> `gcc -o test test.c -L/usr/local/lib/ -lhrlibc`, then run it with `samples/test.c`
