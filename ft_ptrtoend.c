/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrtoend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 20:11:05 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 20:11:06 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*str;

// 	str = "tesd";
// 	printf("%p\n", str);
// 	printf("%s\n", ft_ptrtoend(str) - 1);
// 	printf("%p\n", ft_ptrtoend(str));
// 	return (0);
// }

char	*ft_ptrtoend(char *s)
{
	if (s)
	{
		while (*s)
			s++;
		return (s);
	}
	else
		return (NULL);
}
