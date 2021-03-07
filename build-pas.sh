#!/bin/sh

# build c++ program
fpc $1.pas

if [ $? -ne 0 ] 
then
    echo 💥 BUILD ERROR 💥
    exit 1
fi

# run program
./main<input>output

# cleaning up
rm main *.o