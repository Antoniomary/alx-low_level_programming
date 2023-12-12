#!/bin/bash
curl -sL -o "/tmp/libmole.so" https://github.com/Antoniomary/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libmole.so
export LD_PRELOAD=/tmp/libmole.so
