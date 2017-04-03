#!/bin/bash
make
mv snowball ./Tests
cp vict.cpp ./Tests
cd ./Tests
g++ -o vict vict.cpp
cd ".."
