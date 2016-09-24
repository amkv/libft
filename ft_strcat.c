/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 22:45:34 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 22:45:35 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strcat2(char *s1, const char *s2);

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "help";
	s2 = "desk";

	printf("main: %p\n", &s1);
	printf("main: %p\n", &s2);
	//strcat(s1, s2);
	ft_strcat(s1, s2);
	ft_strcat2(s1, s2);
	return (0);
}

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	printf("sc1: %p\n", &s1);
	printf("sc1: %p\n", &s2);
	return (s1);
}

char	*ft_strcat2(char *s1, const char *s2)
{
	printf("sc2: %p\n", &s1);
	printf("sc2: %p\n", &s2);
	return (s1);
}