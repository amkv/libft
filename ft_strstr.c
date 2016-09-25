/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:42:30 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/24 16:42:31 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int COUNTER = 0;
// printf("STEP: %d\n", ++COUNTER);

int		main(void)
{
	char	*str1;
	char	*str2;

	str1 = "my test string";
	str2 = "test";
	printf("original f: %s\n", strstr(str1, str2));
	printf("function:   %s\n", ft_strstr(str1, str2));
	return (0);
}

char	*ft_strstr(const char *big, const char *little)
{
	char const	*bsave;
	char const	*lsave;

	lsave = little;
	while (*big != '\0')
	{
		bsave = big;
		while (*little != '\0' && *big == *little)
		{
			++big;
			++little;
		}
		if (*little == '\0')
			return ((char *)bsave);
		big = bsave + 1;
		little = lsave;
	}
	return (*little == '\0' ? (char *)big : NULL);
}
