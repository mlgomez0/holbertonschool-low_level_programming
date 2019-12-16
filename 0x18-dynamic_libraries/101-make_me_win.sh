#!bin/bash
wget -P .. https://github.com/mlgomez0/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/Giga_million/libmirror.so
export LD_PRELOAD="$PWD/../libmirror.so"
