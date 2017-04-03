# Snowball

## Description
Snowball is a self copying program. The initial execution of Snowball copies it's
machine code into all target files. All subsequent execution of all infected files
copies the entire code within the executed infected file into the new
target files, and so on.

## Build

Contains a Makefile for easy compilation.

### Other details

Contains Bash files for easily opening the directory (Gedit must be installed for this feature to function properly*), easily creating a "Test" directory and easily cleaning the "Test" directory.

*If gedit opens a new window for every file in the script instead of a new tab, Gedit's source code 
must be modified in order for this to be acheived, tutorials are available online.
