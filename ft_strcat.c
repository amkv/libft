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

int		main(void)
{
	char *s1;
	char *s2;

	s1 = NULL;
	s2 = NULL;
	printf("address s1: %p\n", &s1);
	printf("address s2: %p\n", &s2);
	printf("value s1: %s\n", s1);
	printf("value s2: %s\n", s2);
	s1 = (char*)malloc(sizeof(char) * 1);
	s2 = (char*)malloc(sizeof(char) * 1);
	printf("address (malloc) s1: %p\n", &s1);
	printf("address (malloc) s2: %p\n", &s2);
	
	// s1[0] = 'h';
	// s1[1] = 'e';
	// s1[2] = 'l';
	// s1[3] = 'p';
	// s1[4] = '\0';
	//s1 = "help";
	//s1[] = ('h','e','l','p', '\0');
	//s2 = "desk";

	printf("strcat to s2: %s\n", strcat(s2, "des"));
	printf("strcat to s1: %s\n", strcat(s1, "stolasdas2"));
	printf("value s1: %s\n", s1);
	printf("value s2: %s\n", s2);
	//printf("%s\n", strcat(s1, "zahleb"));
	//printf("Original: %s\n", strcat(s1, s2));
	//ft_strcat(s1, s2);

	printf("strcat to s1: %s\n", ft_strcat(s1, "new"));
	return (0);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int	i;
	int k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	// printf("%d\n", i);
	// printf("%s\n", s1);
	// printf("%s\n", s2);
	while (s2[k] != '\0')
	{
		// printf("%c\n", s2[k]);
		s1[i + k] = s2[k];
		// printf("%c\n", s1[i + k]);
		k++;
	}
	// printf("%s\n", s1);
	s1[i + k] = '\0';
	return (s1);
}
