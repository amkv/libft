/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nextchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 14:40:12 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 14:40:15 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	c;
// 	char	next;
// 	c = 88;
// 	next = ft_nextchar(c);
// 	printf("%c\n", next);
// 	return (0);
// }

char	ft_nextchar(char c)
{
	if (c > 122 || c < 65)
		return (48);
	if (c >= 65 && c < 122)
		return (c + 1);
	if (c == 122)
		return (65);
	return (48);
}
