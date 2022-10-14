#!/bin/bash

mkdir build/
for f in $(ls *.c)
do
    exename=${f%??}
    echo "$f is $exename"
    cc -o build/$exename src/$f
done
