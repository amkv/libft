/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 16:49:39 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 16:49:40 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

/*
Sets every character of the string to the value ’\0’.

return:
None.
*/

// int		main(void)
// {
// 	char	*str;
// 	int		size;

// 	size = 5;
// 	str = ft_strnew(size);
// 	ft_strncpy(str, "test", size);
// 	printf("%s\n", str);
// 	ft_strclr(str);
// 	printf("%s\n", str);
// 	return (0);
// }

void	ft_strclr(char *s)
{
	if (s && *s)
		while (*s)
			*s++ = '\0';	
}
