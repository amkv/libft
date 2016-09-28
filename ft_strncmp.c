/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:29:50 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 17:29:52 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *s1ptr;
	const unsigned char *s2ptr;

	s1ptr = (unsigned char*)s1;
	s2ptr = (unsigned char*)s2;
	while (s1ptr != '\0' || s2ptr != '\0')
	{
		if ((*s1ptr == *s2ptr) && n > 0)
		{
			s1ptr++;
			s2ptr++;
			n--;
		}
		else
			return (*s1ptr - *s2ptr);
	}
	return (0);
}
