# Snowball

## Description
Snowball is a self copying program. The initial execution of Snowball copies it's
machine code into all target files. All subsequent execution of all infected files
copies the entire code within the executed infected file into the new
target files, and so on.

## Build

Contains a Makefile for easy compilation.

### Other details

Contains Bash files for easily opening the directory (Gedit must be installed), easily creating a "Test" directory and easily cleaning the "Test" directory.
