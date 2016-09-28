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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;

	ptr = dst;
	while (n > 0)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		n--;
		dst++;
		src++;
	}
	return (ptr);
}
