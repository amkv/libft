/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:26:12 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/28 10:26:14 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {
// 	char	*dst;
// 	char	*src; // 5 steps
// 	size_t	steps;
// 	size_t	size;
// 	int		index;
// 	char	n;

// 	size = 2;	// extra size for dst (min 2)
// 	steps = 5;	// steps (symbols for copy)
// 	index = 5; // for print characters
// 	src = "desk";
// 	n = '\n';
	
// 	printf("-------------------\n");
// 	printf("real size of dst: %lu\n", (sizeof(dst)));
// 	dst = (char*)malloc(sizeof(dst) * size);
// 	printf("malloc sizeof:   %lu\n", (sizeof(dst) * size));
// 	ft_memcpy(dst, src, steps);
	
// 	printf("-------------------\n");
// 	//printf("result: %s\n", dst); // only if '\0' exist
// 	while (index--)
// 		write(1, dst++, 1);
// 	write(1, &n, 1);
// 	printf("-------------------\n");
// 	return (0);
// }

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dst;
	while (n--)
		*(unsigned char*)dst++ = *(unsigned char const*)src++;
	return (ptr);
}
