/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 15:27:48 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/05 15:27:49 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**
**
*/

// int		main(void)
// {

// 	return (0);
// }

// void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
// {

// }

// github
void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*next_lst;
	t_list	*tmp;

	if (alst)
	{
		next_lst = *alst;
		while (next_lst != NULL)
		{
			if (del)
				(*del)(next_lst->content, (*next_lst).content_size);
			tmp = next_lst->next;
			free(next_lst);
			next_lst = tmp;
		}
		*alst = NULL;
	}
}
