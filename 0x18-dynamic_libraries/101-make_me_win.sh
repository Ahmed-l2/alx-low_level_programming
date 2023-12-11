#!/bin/bash
wget -P https://github.com/Ahmed-l2/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gigam.so
export LD_PRELOAD=./gigam.so:$LD_LIBRARY_PATH
