/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:21:08 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 14:21:09 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/*
Allocates (with malloc(3)) and returns a “fresh” memory area.
The memory allocated is initialized to 0.
If the alloca- tion fails, the function returns NULL.

Return value:
The allocated memory area.
*/

// int		main(void)
// {
// 	char	*s;

// 	s = NULL;
// 	printf("%p\n", s);
// 	s = ft_memalloc(10);
// 	printf("s: %p\n", s);
// 	return (0);
// }

void	*ft_memalloc(size_t size)
{
	unsigned char	*ptr;
	
	if (!(ptr = malloc(size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
