#!/bin/sh
c++ pg4.cpp
while read line
do
./a.out $line >> outp.txt
done <dateip.txt
