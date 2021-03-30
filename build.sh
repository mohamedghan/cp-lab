#!/bin/sh

case $2 in
   '.pas')
        fpc $1.pas
    ;;
   '.cpp')
        g++ -std=c++17 -o main $1.cpp
    ;;
    *)
        exit 0
    ;;
esac



if [ $? -ne 0 ] 
then
    echo 💥 BUILD ERROR 💥
    exit 1
fi

# run program
./main<input>output

# cleaning up
rm main *.o || true