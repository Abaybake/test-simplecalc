rm -rf build
mkdir build
cd build
export CC=gcc
cmake ..
make
cd ..
ln -sf build/src/simplecalc simplecalc