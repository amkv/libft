/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 17:12:48 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/04 17:12:50 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a link’s pointer address 
** and frees the memory of the link’s content 
** using the function del given as a parameter, 
** then frees the link’s memory using free(3). 
** The memory of next musnt not be freed under any circumstance. 
** Finally, the pointer to the link that was just freed
** must be set to NULL 
** (quite similar to the function ft_memdel in the mandatory part).
**
** param #1 The adress of a pointer to a link that needs to be freed
**
** return: none
**
** free
*/
// void	ft_del(void *v, size_t n);

// github
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;

	if (alst && *alst)
	{
		tmp = (*alst)->next;
		if (del)
			del((*alst)->content, (*alst)->content_size);
		(*alst)->content = NULL;
		free(*alst);
		*alst = tmp;
	}
}

// int		main(void)
// {
// 	t_list	*list1;
// 	t_list	*list2;
// 	char	*content1;
// 	char	*content2;
// 	void	(*del)(void *, size_t);

// 	del = ft_bzero;
// 	content1 = "test1";
// 	content2 = "test2";
// 	printf("string: %s\n", content1);
// 	printf("sizeof: %zu\n", sizeof(content1));

// 	list1 = ft_lstnew(content1, sizeof(content1));
// 	list2 = ft_lstnew(content2, sizeof(content2));
// 	return (0);
// }

// void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
// {
// 	alst->content = del(alst->content, sizeof(alst->content));
// 	// alst = NULL;
// 	// del = NULL;
// }

// void	ft_del(void *v, size_t n)
// {
// 	while (n-- > 0)
// 		v++;
// }
