#!/bin/bash
 wget -P /tmp https://raw.githubusercontent.com/Youssef-oussaid/alx-low_level_programming/master/0x18-dynamic_libraries/libgiga.so
 export LD_PRELOAD=/tmp/libgiga.so
 