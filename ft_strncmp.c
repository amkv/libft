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
#include <string.h> // strncmp
#include <stdio.h> // printf

int		main(void)
{
	size_t	number;
	char	*str1;
	char	*str2;
	int		st1;
	int		st2;

	str1 = "tesd";
	str2 = "test";
	number = 2;
	st1 = strncmp(str1, str2, number);
	st2 = ft_strncmp(str1, str2, number);
	printf("Original:%5d\n", st1);
	printf("Function:%5d\n", st2);
	return (0);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((s1[i] - 48) - (s2[i] - 48));
	}
	return (0);
}
