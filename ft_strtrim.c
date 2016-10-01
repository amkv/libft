/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:13:26 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 16:13:27 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Allocates (with malloc(3)) and returns a copy of the string given as argument
without whitespaces at the beginning or at the end of the string. 
Will be considered as whitespaces the following 
characters ’ ’, ’\n’ and ’\t’. 
If s has no whitespaces at the beginning or at the end, 
the function returns a copy of s. 
If the allocation fails the function returns NULL.

return:
The “fresh” trimmed string or a copy of s.
*/

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*s;
// 	char	*copy;

// 	s = "test";
// 	copy = ft_strtrim(s);
// 	printf("s: %s\n", s);
// 	printf("c: %s\n", copy);
// 	return (0);
// }

char				*ft_strtrim(char const *s)
{
	unsigned int	len;
	char			*copy;
	char			*ptr;
	int				tmbl;

	if (s)
	{
		len = ft_strlen(s);
		copy = (char*)malloc(sizeof(char) * (len + 1));
		if (copy)
		{
			ptr = copy;
			while (*s)
			{
				tmbl = ft_isspace(*s);
				if (!tmbl)
				{
					*copy++ = *s;
				}
				s++;
			}
			*ptr = '\0';
			return (copy);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}


char *sptr;
sptr = s;
while (*s)
{
	sptr = s;
	while (*sptr == ' ' || *sptr == '\n' || *sptr == '\t')
		sptr++;
}



