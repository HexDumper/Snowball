#!/bin/bash
make
mv main_exec ./Tests
cp vict.cpp ./Tests
cd ./Tests
g++ -o vict vict.cpp
cd ".."
