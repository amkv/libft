/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 19:55:41 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 19:55:42 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	int		n;
// 	int		fd;

// 	n = -12;
// 	fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	nb = (n < 0) ? n * -1 : n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
