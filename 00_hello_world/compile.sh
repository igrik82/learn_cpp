#!/usr/bin/env bash
INFILENAME=$1
OUTFILENAME=$2

if [ -z $INFILENAME ]; then
    INFILENAME="main.cpp"
fi

if [ -z $OUTFILENAME ]; then
    OUTFILENAME="main"
fi

clang++ --debug $INFILENAME -O0 -gdwarf-2 -std=c++17 -Wall -o $OUTFILENAME
