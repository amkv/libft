/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:41:02 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/22 14:41:03 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcpy(char *dst, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// char				*ft_strcpy(char *dst, const char *src)
// {
// 	while (*src)
// 		*(unsigned char*)dst++ = *(unsigned char*)src++;
// 	*(unsigned char*)dst = '\0';
// 	return (dst);
// }
