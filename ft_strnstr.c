/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 16:51:38 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/26 16:51:41 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char const	*bigbox;
	char const	*littlebox;

	littlebox = little;
	while (*big != '\0')
	{
		bigbox = big;
		while (*little != '\0' && *big == *little && len > 0)
		{
			++big;
			++little;
			--len;
		}
		if (*little == '\0')
			return ((char *)bigbox);
		big = bigbox + 1;
		little = littlebox;
	}
	return (*little == '\0' ? (char *)big : NULL);
}
