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
FLAGS = -Wall -Wextra -Werror



all: $(NAME)

$(NAME):
	clear

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
