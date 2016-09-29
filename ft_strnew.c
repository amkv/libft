/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:10:07 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 16:10:10 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
Each character of the string is initialized at ’\0’.
If the allocation fails the function returns NULL.

The string allocated and initialized to 0.
*/

// int		main(void)
// {
// 	char	*str;
// 	size_t	size;

// 	size = 10;
// 	str = ft_strnew(size);
// 	while (size-- > 0)
// 		printf("%p\n", str++);
// 	return (0);
// }

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*ptr;

	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ptr = str;
	while (*ptr)
	{
		*ptr = '\0';
		ptr++;
	}
	return (str);
}