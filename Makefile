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

#NAME = libft.a
NAME = test
FLAGS = -Wall -Wextra -Werror 
CFILES = main.c
OFILES = $(CFILES:.c=.o)
CC = gcc

all: $(NAME)

$(NAME):
	clear
	@$(CC) $(FLAGS) $(CFILES) -o $(NAME)
	@echo "Compiled: $(NAME)"
	@./test

clean:
	/bin/rm -rf $(OFILES)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
