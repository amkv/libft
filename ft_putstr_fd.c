/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:05:25 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 14:05:27 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {
// 	char	*s;
// 	int		fd;

// 	s = "test";
// 	fd = 1;
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return;
	while (*s)
		ft_putchar_fd(*s++, fd);
}
