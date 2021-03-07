#!/bin/sh

# build c++ program
g++ -std=c++17 -o main $1.cpp

if [ $? -ne 0 ] 
then
    echo 💥 BUILD ERROR 💥
    exit 
fi

# run program
./main<input>output

# cleaning up
rm main