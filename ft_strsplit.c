/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 11:15:03 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/01 11:15:05 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
Allocates (with malloc(3)) and returns an array of “fresh” strings
(all ending with ’\0’, including the array itself)
obtained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL.
Example : ft_strsplit("*hello*fellow***students*", ’*’)
returns the array ["hello", "fellow", "students"].

return:
The array of “fresh” strings result of the split.

malloc
free
*/

#include "libft.h"

int		main(void)
{
	char	*s;
	char	c;
	char	**str;

	s = "md td ";
	c = ' ';
	//printf("str: %s\n", s);
	str = ft_strsplit(s, c);
	while (**str)
	{
		printf("%s\n", *str);
		str++;
	}
	return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	// char	*beg;
	// char	*end;
	//size_t	len;
	char	**str;
	//char	*ptr;
	size_t	index;
	//char	*temp;

	if (s)
	{
//---------------------------------------------------------------
		// ptr = (char*)s;
		// len = 0;
		// while (*ptr++)
		// 	if (*ptr == c)
		// 		len++;
		// str = (char**)malloc(sizeof(char) * (++len));
		//printf("%zu\n", ft_strchr_qt((char*)s, c));
		str = (char**)malloc(sizeof(char) * (ft_strchr_qt((char*)s, c)));
		// str[0] = "test";
		// str[1] = "HELP";
//---------------------------------------------------------------
		index = 0;
		// beg = (char*)s;
		// end = beg;
		while (*s != '\0')
		{
			// if (*end == c)
			// {
			// 	temp = (char*)malloc(sizeof(char) * (ft_ptrlen(beg, end) + 1));
			// 	temp = ft_strcpy(beg, end);
			// 	str[index] = temp;
			// 	free(temp);
			// 	index++;
			// }
			s++;
		}
		return (str);
	}
	else
		return (NULL);

}



		// printf("%s\n", "----------------");
		// printf("ptr beg: %p\n", beg);
		// printf("ptr end: %p\n", end);
		// printf("ptr chr: %c\n", *beg);
		// printf("ptr chr: %c\n", *end);



















