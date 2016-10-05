/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:42:29 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 17:42:30 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*

Applies the function f to each character of the string passed as argument, 
and passing its index as first argument. 
Each character is passed by address to f to be modified if necessary.

*/

// int		main(void)
// {

// 	return (0);
// }

// void				ft_striteri(char *s, void (*f)(unsigned int, char *))
// {
// 	unsigned int	index;

// 	index = 0;
// 	if (s && *s)
// 		while (*s)
// 			f(index++, s++);
// }

// github
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
		while (s[i] != '\0')
		{
			(*f)(i, s + i);
			i++;
		}
}