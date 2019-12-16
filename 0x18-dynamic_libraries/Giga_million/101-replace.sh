#!/bin/bash
wget -P ..
LD_PRELOAD=$PWD/libmirror.so ./gm
