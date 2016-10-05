/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 15:34:42 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/05 15:34:43 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {

// 	return (0);
// }

// t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
// {


// }

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_new;
	t_list	*temp;
	t_list	*lst_new;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst_new = lst;
	temp = (*f)(lst_new);
	if ((ret_new = ft_lstnew(temp->content, temp->content_size)) == NULL)
		return (NULL);
	ret = ret_new;
	lst_new = lst_new->next;
	while (lst_new != NULL)
	{
		temp = (*f)(lst_new);
		ret_new->next = ft_lstnew(temp->content, temp->content_size);
		if (ret_new->next == NULL)
			return (NULL);
		ret_new = ret_new->next;
		lst_new = lst_new->next;
	}
	return (ret);
}
