#!/bin/bash

for FILE in *; do
	if  [ -f $FILE ] && [ ${FILE:${#FILE}-3} != ".sh" ] && [ ${FILE} != "Makefile" ]; then
		gedit $FILE &
	fi
done 
