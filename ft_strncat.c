/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:16:38 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/26 14:16:39 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h> //del

// int		main(void)
// {
// 	char	*s1;
// 	char	*s3;
// 	size_t	len;

// 	s1 = NULL;
// 	s3 = NULL;
// 	s1 = (char*)malloc(sizeof(char)*30);
// 	s3 = (char*)malloc(sizeof(char)*30);
// 	s1[0] = 'h';
// 	//s1[1] = '\0';
// 	s3[0] = 'h';
// 	//s3[1] = '\0';
// 	len = 5;
// 	printf("original: %s\n", strncat(s1, "desk", len));
// 	printf("function: %s\n", ft_strncat(s3, "desk", len));
// 	return (0);
// }

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	// printf("1: %s\n", s1);
	// printf("1: %s\n", s2);
	while (s1[i] != '\0')
		i++;
	while (s2[k] != '\0' && n > 0)
	{
		s1[i] = s2[k];
		k++;
		n--;
		i++;
	}
	s1[i] = '\0';

	// while (*s1 != '\0')
	// 	s1++;
	// while (*s2 != '\0' && n > 0)
	// {
	// 	*s1 = *s2;
	// 	s1++;
	// 	s2++;
	// 	n--;
	// }
	// *s1 = '\0';
	// printf("2: %s\n", s1);
	// printf("2: %s\n", s2);

	return (s1);
}