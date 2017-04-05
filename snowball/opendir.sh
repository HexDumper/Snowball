#!/bin/bash

for FILE in *; do
	if  [ -f $FILE ] && [ ${FILE:${#FILE}-3} != ".sh" ] && [ ${FILE} != "Makefile" ] && [ ${FILE} != "snowball" ]; then
		gedit $FILE &
	fi
done 
