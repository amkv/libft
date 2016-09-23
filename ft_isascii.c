/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:14:25 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 11:14:27 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf
#include <ctype.h> // isascii

int		main(void)
{
	unsigned char ch;

	ch = 0200;
	printf("char:    %5c\n", ch);
	printf("Original:%5d\n", isascii(ch));
	printf("Function:%5d\n", ft_isascii(ch));
	return (0);
}

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
