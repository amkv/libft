/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:51:55 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 13:51:57 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf
#include <ctype.h> // isalpha

int		main(void)
{
	unsigned char	ch;

	ch = '3';
	printf("Character:%4d\n", ch);
	printf("Original:%5d\n", isalpha(ch));
	printf("Function:%5d\n", ft_isalpha(ch));
	return (0);
}

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >=97 && c <= 122))
		return (1);
	else
		return (0);
}
