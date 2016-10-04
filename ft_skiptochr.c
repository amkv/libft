/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skiptochr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 20:33:43 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/03 20:34:12 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {
// 	char	*s;
// 	char	c;

// 	s = "tesd";
// 	c = ' ';
// 	printf("%s\n", ft_skiptochr(s, c));
// 	return (0);
// }

/*
** возвращает поинтер на char предшествующий искомому
*/

char	*ft_skiptochr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s - 1);
		s++;
	}
	return (s - 1);
}