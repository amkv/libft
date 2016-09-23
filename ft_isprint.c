/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:42:02 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 10:42:03 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf
#include <ctype.h> // isprint

int		main(void)
{
	unsigned char ch;

	//ch = 'Δ';
	//ch = 'a';
	ch = 0133;
	printf("char:    %5c\n", ch);
	printf("Original:%5d\n", isprint(ch));
	printf("Function:%5d\n", ft_isprint(ch));
	return (0);
}

int		ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}
