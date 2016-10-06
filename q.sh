#!/bin/zsh
make fclean
echo "---------------------------"
clear && gcc -Wall -Wextra -Werror ft_* -o test && ./test
