#!/usr/bin/env bash
INFILENAME=$1
OUTFILENAME=$2

if [ -z ${INFILENAME} ]; then
    INFILENAME="main.cpp"
fi

if [ -z ${OUTFILENAME} ]; then
    OUTFILENAME="main"
fi

ORANGE='\033[0;33m'
WHITE='\033[1;37m'
NC='\033[0m'

printf "${ORANGE}Compiling \"${INFILENAME}\" to \"${OUTFILENAME}\"...${NC}\n"
printf "${WHITE}Time elapsed:"
time $(clang++ --debug ${INFILENAME} -O0 -gdwarf-2 -std=c++17 -Wall -o ${OUTFILENAME})
