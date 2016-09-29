/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 14:35:58 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/29 14:35:59 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
Takes as a parameter the address of a memory area 
that needs to be freed with free(3), 
then puts the pointer to NULL.

return:
A pointer’s address that needs its memory freed and set to NULL.
*/


// int		main(void)
// {
// 	void	*ptr;
// 	//void	**ptrptr;

// 	ptr = (void*)malloc(sizeof(void)*10);
// 	//ptrptr = ptr;
// 	//ft_strcpy(ptr, "test");
// 	ft_memcpy(ptr, "test", 5);
// 	printf("string:  %s\n", ptr);
// 	printf("pointer: %p\n", ptr);
// 	//ptrptr = NULL;
// 	ft_memdel(&ptr);

// 	return (0);
// }

void	ft_memdel(void **ap)
{
	// // printf("%p\n", *ap);
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}

}
