#!/bin/bash
wget -P  https://github.com/megamanq/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.so
LD_PRELOAD=/tmp/101-make_me_win.so gm
