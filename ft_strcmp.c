/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 15:20:25 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 15:20:26 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		ft_strcmp(const char *s1, const char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' || s2[i] != '\0')
// 	{
// 		if (s1[i] == s2[i])
// 			i++;
// 		else
// 			return ((s1[i] - 48) - (s2[i] - 48));
// 	}
// 	return (0);
// }

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return ((*s1 - 48) - (*s2 - 48)); 
	}
	return (0);
}
