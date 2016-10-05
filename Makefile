# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/21 12:02:02 by akalmyko          #+#    #+#              #
#    Updated: 2016/09/21 12:02:04 by akalmyko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nabrosok

NAME = libft.a
NAME2 = test.a
FLAGS = -Wall -Wextra -Werror -c
CFILES = *.c
OFILES = $(CFILES:.c=.o)
CC = gcc

.PHONY: clean fclean re all

all: $(NAME)

$(NAME):
	clear
	@#$(CC) $(FLAGS) $(CFILES) $(NAME)
	@#echo "Compiled: $(NAME)"
	@#./test

	$(CC) $(FLAGS) $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OFILES)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
