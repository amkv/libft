/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:51:03 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 17:51:04 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/*
Applies the function f to each character of the string 
given as argument to create a “fresh” new string 
(with malloc(3)) resulting from the successive applications of f.

return:
The “fresh” string created from the successive applications of f.
*/

// int		main(void)
// {
// 	char	*s;
// 	char	*next;
// 	char	(*ft)(char);

// 	ft = ft_nextchar;
// 	s = "abcd";
// 	next = ft_strmap(s, ft);
// 	printf("string: %s\n", s);
// 	printf("result: %s\nmain ptr(str): %p\n", next, next);
// 	return (0);
// }

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ptr;

	if (s)
	{
		str = (char*)malloc(sizeof(char)*(ft_strlen(s) + 1));
		//printf("ptr(str): %p\n", str);
		if (str)
		{
			ptr = str;
			while (*s)
				*ptr++ = f(*s++);
			*ptr = '\0';
			return (str);
		}
	}
	return (NULL);
}

/*
char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		str = (char*)malloc(sizeof(char)*(len + 1));
		if (str)
		{
			ptr = str;
			while (s[i] != '\0')
			{
				ptr[i] = f(s[i]);
				i++;
			}
			ptr[len] = '\0';
			return (str);
		}
	}
	return (NULL);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ptr;

	if (!s)
		return (NULL);
	else
	{
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		else
		{
			ptr = str;
			while (*s)
				*ptr++ = f(*s++);
			*ptr = '\0';
			return (str);
		}
	}
}
*/
