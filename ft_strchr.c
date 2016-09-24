/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 14:08:41 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/24 14:08:43 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	*str1;
	int		num;

	str1 = "test file";
	//num = 't';
	//num = 'e';
	//num = 'f';
	num = ' ';
	//num = '\0';
	//num = 'd';
	printf("%s\n", strchr(str1, num));
	printf("%s\n", ft_strchr(str1, num));
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (NULL);
}
