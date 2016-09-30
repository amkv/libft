/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:37:51 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 15:37:53 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a “fresh” substring 
from the string given as argument.
The substring begins at index start and is of size len.
If start and len aren’t referng to a valid substring, 
the behavior is undefined. 
If the allocation fails, the function returns NULL.

return:
The substring.
*/

#include "libft.h"
// #include <stdio.h>

// int					main(void)
// {
// 	char			*s;
// 	unsigned int	start;
// 	size_t			len;
// 	char			substr;

// 	s = "test";
// 	start = 2;
// 	len = 4;
// 	substr = ft_strsub(s, start, len);
// 	return (0);
// }

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	if (s)
	{
		str = (char*)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			ptr = str;
			while (len-- > 0 && *s != '\0')	
				*ptr++ = s[start++];
			*ptr = '\0';
			return (str);		
		}
		else
			return (NULL);
	}
	return (NULL);
}

