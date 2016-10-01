/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_qt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 15:59:51 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/01 15:59:53 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {
// 	char	*s;
// 	char	c;
// 	size_t	qt;

// 	s = "";
// 	c = ' ';
// 	qt = ft_strchr_qt(s, c);
// 	printf("%zu\n", qt);
// 	return (0);
// }

size_t		ft_strchr_qt(char *s, char c)
{
	size_t	quantity;

	if (s)
	{
		if (ft_strlen(s) == 0)
			return (0);
		quantity = 0;
		while (*s++)
			if (*s == c)
				quantity++;
		return (quantity);
	}
	else
		return (-1);
}
