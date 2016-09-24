/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:26:18 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 13:26:19 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // printf
#include <ctype.h> // isalnum

int		main(void)
{
	unsigned char ch;

	ch = '!';
	printf("Character:%4c\n", ch);
	printf("Original:%5d\n", isalnum(ch));
	printf("Function:%5d\n", ft_isalnum(ch));
	return (0);
}

int		ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
