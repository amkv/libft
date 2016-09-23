/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:36:41 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 10:36:44 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h> //toupper

int					main(void)
{
	unsigned char	number;
	int				result;

	number = '!';
	result = toupper(number);
	printf("Original:%5d\n", result);
	result = ft_toupper(number);
	printf("Function:%5d\n", result);
	return (0);
}

int					ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
