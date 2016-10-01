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

// 	s = "  \t \t \n   \n\n\n\t";
// 	//printf("%s\n", s);
// 	printf("%s\n", s);
// 	printf("ptr (str): %p\n", s);
// 	printf("str + skip: %s\n", ft_skipspace_beg(s));
// 	printf("ptr (str + skip): %p\n", s);
// 	printf("len: %zu\n", ft_ptrlen(s, s));
// 	return (0);
// }

char	*ft_skipspace_beg(char *s)
{
	unsigned int	len;

	if (s)
	{
		len = ft_strlen(s);
		if (len == 0)
			return (s);
		while (*s != '\0' && (*s == ' ' || *s == '\n' || *s == '\t'))
			s++;
		return (s);
	}
	else
		return (NULL);
}
