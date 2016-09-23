/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:36:22 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 10:36:27 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h> // tolower

int					main(void)
{
	unsigned char	number;
	int				result;

	number = 'A';
	result = tolower(number);
	printf("Original:%5d\n", result);
	result = ft_tolower(number);
	printf("Function:%5d\n", result);
	return (0);
}

int					ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
