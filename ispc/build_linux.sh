#!/bin/sh
set -e

mkdir --parents build/linux
cd build/linux
cmake -D ISPC_EXECUTABLE=/home/gpsnoopy/development/ispc-v1.13.0-linux/bin/ispc ../..
make -j
