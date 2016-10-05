/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:16:52 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 17:16:53 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
Applies the function f to each character of the string passed as argument. 
Each character is passed by address to f to be modified if necessary.

return:
None.
*/

// int		main(void)
// {
// 	void	(*foo)(char);
// 	function = 
// 	return (0);
// }

// void	ft_striter(char *s, void (*f)(char *))
// {
// 	if (s && s)
// 		while (*s)
// 			f(s++);
// }

//github
void	ft_striter(char *s, void (*f)(char*))
{
	int	i;

	i = 0;
	if (s && f)
		while (s[i] != '\0')
		{
			(*f)(s + i);
			i++;
		}
}
