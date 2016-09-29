#!/bin/bash

# clear && gcc -Wall -Wextra -Werror
# -o test && ./test

NAME=test
FUNCTION=$1
clear

if [[ $# -eq 0 ]] ; then
    echo 'input arguments!'
    exit 0
fi
if [ -a "$NAME" ]
	then
		rm $NAME
fi
gcc -Wall -Wextra -Werror $FUNCTION -o $NAME
if [ -a "$NAME" ]
	then
		chmod 755 $NAME
		./$NAME
fi
