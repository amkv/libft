#!/bin/bash
clear
NAME=ftest
FUNCTION="ft_$1.c"
gcc -Wall -Wextra -Werror $FUNCTION -o $NAME
if [ -a "$NAME" ]
	then
		chmod 755 $NAME
		./$NAME
fi