/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 21:39:21 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 21:39:22 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int			main(void)
{
	char	*src;
	char	dst[30];
	char	dst2[30];
	size_t	len;

	src = "tesd";
	len = 4;
	printf("%17s%23s\n", "strncpy", "ft_strncpy");
	printf("___________________________________________\n");
	printf("%s%10s%20s\n", "src:", src, src);
	printf("%s%10s%20s\n", "dst:", dst, dst2);
	printf("%s%5s%20s\n", "result:", strncpy(dst, src, len), ft_strncpy(dst2, src, len));
	printf("%s%9c%20c\n", "0:", dst[0], dst2[0]);
	printf("%s%9c%20c\n", "3:", dst[3], dst2[3]);
	printf("%s%9c%20c\n", "4:", dst[4], dst2[4]);
	printf("%s%9c%20c\n", "5:", dst[5], dst2[5]);
	printf("%s%9c%20c\n", "10:", dst[10], dst2[10]);
	return (0);
}

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (len)
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (dst[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
