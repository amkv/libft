/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:36:56 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 16:36:57 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/*
Takes as a parameter the address 
of a string that need to be freed with free(3),
then sets its pointer to NULL.

return: 
None.
*/

// int		main(void)
// {
// 	char	*str;

// 	str = ft_strnew(10);
// 	printf("%p\n", str);
// 	ft_strdel(&str);
// 	printf("%p\n", str);
// 	return (0);
// }

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
