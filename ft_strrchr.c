/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 15:44:53 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/24 15:44:55 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char *str;
	int	num;

	str = "test f4ile!";
	// num = 't';
	num = 'e';
	// num = ' ';
	// num = 'f';
	// num = '\0';
	// num = 'd';
	//num = 4;
	printf("%s\n", strrchr(str, num));
	printf("%s\n", ft_strrchr(str, num));
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	int		truth;

	truth = 0;
	while (*s != '\0')
	{
		if (c == *s)
		{
			match = (char*)s;
			truth = 1;
		}
		s++;
	}
	if (truth > 0)
		return (match);
	if (c == '\0')
		return ((char*)s);
	else
		return (NULL);
}
