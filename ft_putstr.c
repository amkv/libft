/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 13:37:15 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 13:37:16 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	*str;

	str = "test";
	//ft_putstr(str);
	printf("%s", "test");
	return (0);
}

void	ft_putstr(char const *s)
{
	while (*s)
		ft_putchar(*s++);
}