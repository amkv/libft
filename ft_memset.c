/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:40:24 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/28 10:40:25 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

// int		main(void)
// {
// 	char	*b;
// 	char	c;
// 	size_t	len;

// 	b = (char*)malloc(sizeof(char)*30);
// 	memcpy(b, "test", 4);
// 	printf("%s\n", b);
// 	c = '0';
// 	len = 4;
// 	//memset(b, c, len);
// 	printf("%s\n", b);
// 	return (0);
// }

void	*ft_memset(void *b, int c, size_t len)
{
	while (len-- > 0)
		*((unsigned char*)b + len) = (unsigned char)c;
	return (b);
}
