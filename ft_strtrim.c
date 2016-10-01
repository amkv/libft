/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 16:13:26 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/30 16:13:27 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int		main(void)
// {
// 	char	*s;
// 	//char	*copy;

// 	s = "3 6 ";
// 	//copy = NULL;
// 	//copy = ft_strtrim(s);
// 	printf("rsl: %s\n", ft_strtrim(s));
// 	// printf("str: %s\n", s);
// 	// printf("rsl: %s\n", copy);
// 	//printf("ptr: %p\n", copy);

// 	return (0);
// }


char				*ft_strtrim(char const *s)
{
	char			*copy;
	char			*ptr;
	char			*beg;
	char			*end;

	if (s)
	{
		// ptr = ft_ptrtoend((char*)s);
		// if (!ft_isspace(*s) && !ft_isspace(*--ptr))
		// {
		// 	copy = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		// 	return (ft_strcpy(copy, s));
		// }
		beg = ft_skipspace((char*)s);
		end = ft_skipspace_end((char*)s);
		if (!(copy = (char*)malloc(sizeof(char) * (ft_ptrlen(beg, end) + 1))))
			return (NULL);
		ft_strncpy(copy, beg, ft_ptrlen(beg, end));
		ptr = copy;
		ptr[ft_ptrlen(beg, end)] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
