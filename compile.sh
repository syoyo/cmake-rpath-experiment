rm -rf build
mkdir build
cmake -Bbuild -S. -DCMAKE_INSTALL_PREFIX=`pwd`/dist -DCMAKE_VERBOSE_MAKEFILE=On
cmake --build build
cmake --install build
