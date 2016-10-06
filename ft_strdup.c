/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 19:46:40 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/23 19:46:42 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int			main(void)
// {
// 	char	*str;
// 	char	*str2;

// 	str = "tema";
// 	str2 = NULL;
// 	printf("Original strdup:		%2s\n\n", strdup(str));
// 	printf("str2 Before ft_strdup:		%2p\n", str2);
// 	printf("str2 Before ft_strdup:		%2s\n\n", str2);
// 	str2 = ft_strdup(str);
// 	printf("ft_strdup adress:		%2p\n", str2);
// 	printf("ft_strdup value:		%2s\n\n", str2);
// 	printf("-----memory for str2-----\n");
// 	//free(str2);
// 	//str2 = NULL;
// 	memmove(str2, "desk", 5);
// 	printf("string[0] pointer:		%2p\n", &str2[0]);
// 	printf("string pointer:			%2p\n", str2);
// 	printf("string value:			%2s\n", str2);
// 	return (0);
// }

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*p;

	i = 0;
	while (s1[i] != '\0')
		i++;
	p = (char*)malloc(sizeof(char) * i + 1);
	if (p != NULL)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			p[i] = s1[i];
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	else
		return (NULL);
}
