Cmake RPATH experiment

# Build

```
rm -rf build
mkdir build
cmake -Bbuild -S. -DCMAKE_INSTALL_PREFIX=`pwd`/dist
cmake --build build
cmake --install build
```


