/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 16:42:30 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/24 16:42:31 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char const	*bsave;
	char const	*lsave;

	lsave = little;
	while (*big != '\0')
	{
		bsave = big;
		while (*little != '\0' && *big == *little)
		{
			++big;
			++little;
		}
		if (*little == '\0')
			return ((char *)bsave);
		big = bsave + 1;
		little = lsave;
	}
	return (*little == '\0' ? (char *)big : NULL);
}
