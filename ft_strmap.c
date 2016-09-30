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

// 	return (0);
// }

char	*ft_strmap(char const *s, char (*f)(char))
{
	const char	*ptr;

	ptr = (char*)s;
	while (*ptr)
	{
		f(*ptr);
		ptr = (char*)malloc(sizeof(char));
		ptr++;
	}
	return ((char*)s);
}

