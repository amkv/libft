/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 20:20:58 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/03 20:20:59 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {
// 	char	*s;
// 	char	c;

// 	s = "    test";
// 	c = ' ';
// 	printf("%s\n", ft_skipchr(s, c));
// 	return (0);
// }

char				*ft_skipchr(char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}
