/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 19:48:40 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 19:48:42 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

// int		main(void)
// {
// 	char	*str;
// 	char	*beg;
// 	char	*end;
// 	int		index;

// 	str = "method";
// 	index = 2;
// 	beg = str+2;
// 	end = str;
// 	while (*end)
// 		end++;
// 	end = end - 2;
// 	printf("%p\n", str);
// 	printf("%p\n", str + 1);
// 	printf("%p\n", beg);
// 	printf("%p\n", end);
// 	printf("%c\n", *beg);
// 	printf("%c\n", *end);
// 	printf("%zu\n", ft_ptrlen(beg, end));
// 	return (0);
// }

size_t		ft_ptrlen(char *beg, char *end)
{
	size_t		len;

	if (beg && end)
	{
		len = 0;
		while (beg++ != end)
			len++;
		return (len + 1);
	}
	else
		return (1);
}
