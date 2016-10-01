/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipspace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:40:35 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 16:40:37 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*s;

// 	s = "   test";
// 	printf("%s\n", s);
// 	printf("%s\n", ft_skipspace(s));
// 	return (0);
// }

char	*ft_skipspace(char *s)
{
	if (s)
	{
		while (*s != '\0' && (*s == ' ' || *s == '\n' || *s == '\t'))
			s++;
		return (s);
	}
	else
		return (NULL);
}
