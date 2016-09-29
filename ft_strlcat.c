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
#include <stdio.h>

int			main(void)
{
	char	*dst;
	char	*dst2;
	char	*src;
	size_t	size;
	char	*temp;

	dst = (char*)malloc(sizeof(char)*30);
	dst2 = (char*)malloc(sizeof(char)*30);
	src = "desk345345345";
	size = 5;
	temp = "help ";
	ft_strcpy(dst, temp);
	ft_strcpy(dst2, temp);
	printf("dst: %s\n", dst);
	printf("dst2: %s\n", dst2);
	printf("-----------------------------\n");
	printf("return: %zu\n", strlcat(dst, src, size));
	printf("dst (strlcat): %s\n", dst);
	printf("-----------------------------\n");
	printf("return: %zu\n", ft_strlcat(dst2, src, size));
	printf("dst2 (ft_strlcat): %s\n", dst2);
	return (0);
}

// size_t		ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	int				dstlen;
// 	int				srclen;

// 	dstlen = ft_strlen(dst);
// 	srclen = ft_strlen(src);

// 	while (*dst)
// 		dst++;
// 	while (size > 0)
// 	{
// 		*dst = *src;
// 		dst++;
// 		src++;
// 		size--;
// 	}
// 	return (dstlen + srclen);
// }

/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	ret;

	dst_len = ft_strlen(dst);
	ret = ft_strlen(src) + (size < dst_len ? size : dst_len);
	dst += dst_len;
	while ((++dst_len) < size && *src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstl;
	size_t srcl;
	unsigned char	*dstptr;
	unsigned char	*strptr;

	dstptr = (unsigned char*)dst;
	strptr = (unsigned char*)src;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	while (size > 0)
	{
		*dstptr = *dstptr + dstl;
		*dstptr = *strptr;
		size--;
	}
	return (dstl + srcl);
}
