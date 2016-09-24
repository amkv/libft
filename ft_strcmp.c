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
#include <stdio.h> // printf
#include <string.h> // strcmp

int		main(void)
{
	char	*str1;
	char	*str2;
	int		st1;
	int		st2;

	str1 = " ";
	str2 = "b";
	st1 = strcmp(str1, str2);
	st2 = ft_strcmp(str1, str2);
	printf("Original:%5d\n", st1);
	printf("Function:%5d\n", st2);
	return (0);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((s1[i] - 48) - (s2[i] - 48));
	}
	return (0);
}
