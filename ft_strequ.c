/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 18:03:24 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 18:03:25 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "test";
// 	s2 = "test";
// 	ft_strequ(s1, s2);
// 	return (0);
// }

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 && *s2)
		{
			if (*s1++ == *s2++);
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
