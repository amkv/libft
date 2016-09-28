/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:24:42 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/24 12:24:44 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h> //

int		main(void)
{
	char	*dst;
	char	*src;
	size_t	size;
	char	*dst2;
	char	*src2;

	dst = NULL;
	src = NULL;
	dst2 = NULL;
	src2 = NULL;
	size = 10;
	src = (char*)malloc(sizeof(dst)*30);
	dst = (char*)malloc(sizeof(dst)*30);
	src2 = (char*)malloc(sizeof(dst)*30);
	dst2 = (char*)malloc(sizeof(dst)*30);
	src = "test";
	src2 = "test";
	dst[0] = '1';
	dst2[0] = '1';
	printf("original: %lu\n", strlcat(dst, src, size));
	printf("original: %s\n", src);
	printf("original: %s\n", dst);
	printf("function: %lu\n", ft_strlcat(dst2, src2, size));
	printf("function: %s\n", src2);
	printf("function: %s\n", dst2);
	return (0);
}
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = dst;
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && size > 0)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = '\0';
	while (dst[i] != '\0')
		i++;
	return (i);
}
