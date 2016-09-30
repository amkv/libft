/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:56:43 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 15:56:45 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a “fresh” string
ending with ’\0’, 
result of the concatenation of s1 and s2.
If the allocation fails the function returns NULL.

return:
The “fresh” string result of the concatenation of the 2 strings.
*/

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*sc;

// 	s1 = "help ";
// 	s2 = "desk";
// 	sc = ft_strjoin(s1, s2);

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("sc: %s\n", sc);
// 	printf("ptr: %p\n", sc);
// 	return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;

	if (s1 && s2)
	{
		str = (char*)malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
		if (str)
		{
			//printf("ptr: %p\n", str);
			ptr = str;
			while (*s1)
				*ptr++ = *s1++;
			while (*s2)
				*ptr++ = *s2++;
			*ptr = '\0';
			return (str);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}