/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 18:13:25 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 18:13:26 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {

// 	return (0);
// }

// int		ft_strnequ(char const *s1, char const *s2, size_t n)
// {
// 	if (s1 && s2)
// 	{
// 		while (*s1 && *s2 && n > 0)
// 		{
// 			if (*s1++ == *s2++)
// 				n--;
// 			else
// 				return (0);
// 		}
// 		return (1);
// 	}
// 	return (0);
// }

//github
int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0' && i < n - 1)
		i++;
	if (s1[i] != s2[i])
		return (0);
	return (1);
}
