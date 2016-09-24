#!/bin/bash


# производит поиск в папке с именами ft_
# жждет ввода значения от 1 до ... (количество файлов ft_)
# 0 - последний использованный аргумент
# 
# выводит список файлов
# (1) ft_test.c
# (2) ft_desk.c
# ...

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
