#!/bin/zsh
make fclean
echo "---------------------------"
gcc -Wall -Wextra -Werror ft_* -o test&& ./test
