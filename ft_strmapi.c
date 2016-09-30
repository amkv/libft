/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 15:19:19 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 15:19:21 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function f to each character of the string passed as argument
by giving its index as first argument to create a “fresh” new string
(with malloc(3)) resulting from the successive applications of f.

return:
The “fresh” string created from the successive applications of f.
*/

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {

// 	return (0);
// }

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*ptr;
	unsigned int	index;

	if (s)
	{
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		else
		{
			ptr = str;
			index = 0;
			while (*s)
				*ptr++ = f(index++, *s++);
			*ptr = '\0';
			return (str);
		}
	}
	return (NULL);
}