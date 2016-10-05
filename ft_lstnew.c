/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 13:55:57 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/04 13:55:59 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. 
** The variables content and content_size of the new link are initialized
** by copy of the parameters of the function.
** If the parameter content is nul, 
** the variable content is initialized to NULL 
** and the variable content_size is initialized to 0
** even if the parameter content_size isn’t.
** The variable next is initialized to NULL. 
** If the allocation fails, the function returns NULL.
**
** param#1 The content to put in the new link.
** param#2 The size of the content of the new link.
** 
** malloc(3), free(3)
*/
// int		main(void)
// {
// 	t_list	*new;
// 	void	*content;
// 	size_t	size;

// 	size = 2;
// 	content = "test";
// 	printf("size: %zu\n", sizeof(content));
// 	new = ft_lstnew(content, sizeof(content) * size);
// 	printf("%s\n", new->content);
// 	return (0);
// }

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	if((new = (t_list*)malloc(sizeof(t_list))))
	{
		if (content)
		{
			if ((new->content = (void*)malloc(sizeof(content_size))))
			{
				ft_memcpy(new->content, content, content_size);
				new->content_size = content_size;
				new->next = NULL;
				return (new);
			}
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
			return (new);
		}	
	}
	return (NULL);
}
