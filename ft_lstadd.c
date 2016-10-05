/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 15:31:01 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/05 15:31:02 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int		main(void)
// {

// 	return (0);
// }

// void	ft_lstadd(t_list **alst, t_list *new)
// {


// }

void	ft_lstadd(t_list **alst, t_list *nw)
{
	if (alst && nw)
	{
		nw->next = *alst;
		*alst = nw;
	}
}
