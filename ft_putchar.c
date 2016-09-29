/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 11:54:13 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 11:54:14 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <unistd.h>

// int		main(void)
// {
// 	char	c;

// 	c = 'a';
// 	//putchar(c);
// 	ft_putchar(c);
// 	return (0);
// }

void	ft_putchar(char c)
{
	// unsigned char	d;
	// d = c;
	// write(1, &d, 1);
	write(1, &c, 1);
}