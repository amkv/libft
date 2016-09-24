/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:36:07 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 13:36:08 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf
#include <ctype.h> // isdigit

int		main(void)
{
	unsigned char ch;

	ch = 49;
	printf("Character:%4c\n", ch);
	printf("Original:%5d\n", isdigit(ch));
	printf("Function:%5d\n", ft_isdigit(ch));
	return (0);
}

int		ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
