# revisiting-cpp
Revisiting C++ after having worked with python for more than 3 years, I really have forgotten a lot about cpp. Will work with different codes for cpp as well as data structures. The aim is to create a repo which is enough to be a reference material for cpp and data structures.

## Installation and Execution:
Installing C++ in Ubuntu. Open Terminal, enter:
```console
user@user:~$ sudo apt-get install build-essential
```
Once installed to check whether it is installed:

```console
user@user:~$ gcc -v
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-linux-gnu/7/lto-wrapper
OFFLOAD_TARGET_NAMES=nvptx-none
OFFLOAD_TARGET_DEFAULT=1
Target: x86_64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 7.5.0-3ubuntu1~18.04' --with-bugurl=file:///usr/share/doc/gcc-7/README.Bugs --enable-languages=c,ada,c++,go,brig,d,fortran,objc,obj-c++ --prefix=/usr --with-gcc-major-version-only --program-suffix=-7 --program-prefix=x86_64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-bootstrap --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-vtable-verify --enable-libmpx --enable-plugin --enable-default-pie --with-system-zlib --with-target-system-zlib --enable-objc-gc=auto --enable-multiarch --disable-werror --with-arch-32=i686 --with-abi=m64 --with-multilib-list=m32,m64,mx32 --enable-multilib --with-tune=generic --enable-offload-targets=nvptx-none --without-cuda-driver --enable-checking=release --build=x86_64-linux-gnu --host=x86_64-linux-gnu --target=x86_64-linux-gnu
Thread model: posix
gcc version 7.5.0 (Ubuntu 7.5.0-3ubuntu1~18.04) 
```
Execution:

basic file creation, etc.

```console
user@user:~/Desktop$ mkdir programming_cpp
user@user:~/Desktop$ cd programming_cpp/
user@user:~/Desktop/programming_cpp$ sudo gedit hello.cpp
[sudo] password for user: 

** (gedit:32730): WARNING **: 11:51:11.056: Set document metadata failed: Setting attribute metadata::gedit-spell-language not supported

** (gedit:32730): WARNING **: 11:51:11.057: Set document metadata failed: Setting attribute metadata::gedit-encoding not supported

** (gedit:32730): WARNING **: 11:51:11.251: Set document metadata failed: Setting attribute metadata::gedit-spell-language not supported

** (gedit:32730): WARNING **: 11:51:11.251: Set document metadata failed: Setting attribute metadata::gedit-encoding not supported

** (gedit:32730): WARNING **: 11:51:15.556: Set document metadata failed: Setting attribute metadata::gedit-position not supported
user@user:~/Desktop/programming_cpp$ sudo g++ hello.cpp
user@user:~/Desktop/programming_cpp$ ./a.out


Hello World,
Welcome to my first C ++ program on Ubuntu Linux


user@user:~/Desktop/programming_cpp$ 
```
