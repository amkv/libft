#!/bin/bash
clear
NAME=ftest
FUNCTION=$1
gcc -Wall -Wextra -Werror $FUNCTION -o $NAME
if [ -a "$NAME" ]
	then
		chmod 755 $NAME
		./$NAME
fi
