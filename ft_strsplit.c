/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 11:15:03 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/03 19:26:25 by akalmyko         ###   ########.fr       */
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

// int		main(void)
// {
// 	char	*s;
// 	char	c;
// 	char	**str;
// 	int		i;

//  	s = "123 456  789";
//  	c = ' ';
// 	i = 0;
//  	str = ft_strsplit(s, c);
// 	//printf("result[0]: %s\n", str[0]);
// 	//printf("result[1]: %s\n", str[1]);
// 	//printf("%s\n", str[2]);
//  	while (**str)
// 		printf("%s\n", *str++);
// 	printf("---end of file---\n");
//  	return (0);
// }

static int		ft_find_word(const char *str, int i, char **ret, char c)
{
	int		len;
	int		space;

	space = 0;
	len = 0;
	while (*str == c)
	{
		str++;
		space++;
	}
	while (str[len] && str[len] != c)
		len++;
	if (len > 0)
	{
		ret[i] = ft_strnew(len);
		ft_strncpy(ret[i], str, len);
	}
	return (space + len);
}

static int		ft_count_words(const char *str, int i, char c)
{
	while (*str == c)
		str++;
	while (*str)
	{
		while (*str && *str != c)
			str++;
		while (*str == c)
			str++;
		i++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		len;
	char	**ret;
	int		i;
	int		wc;

	if (!s)
		return (NULL);
	wc = ft_count_words(s, 0, c);
	len = 0;
	ret = (char **)ft_memalloc((wc + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	len = 0;
	while (*s)
	{
		len = ft_find_word(s, i++, ret, c);
		s += len;
	}
	ret[wc] = 0;
	return (ret);
}

// char	**ft_strsplit(char const *s, char c)
// {
// 	char	**result;
// 	char	*beg;
// 	char	*end;
// 	char	*temp;
// 	size_t	index;

// 	result = (char**)malloc(sizeof(char) * (ft_strchr_qt((char*)s, c)));
// 	index = 0;
// 	//beg = (char*)s;
// 	//end = (char*)s;
// 	// while (*s != '\0')
// 	// {
// 		//printf("%s\n", "--------------------");
// 		beg = ft_skipchr((char*)s, c);
// 		end = ft_skiptochr(beg, c);
// 		//printf("beg: %c\n", *beg);
// 		//printf("end: %c\n", *end);
// 		//printf("%s\n", "-----");
// 		//printf("beg ptr: %p\n", beg);
// 		//printf("end ptr: %p\n", end);
// 		//printf("%s\n", "-----");
// 		temp = (char*)malloc(sizeof(char) * (ft_ptrlen(beg, end) + 1));
// 		if (!temp)
// 			return (NULL);
// 		//printf("length: %zu\n", ft_ptrlen(beg, end));
// 		//printf("%s\n", "-----");
// 		ft_strncpy(temp, beg, ft_ptrlen(beg, end));
// 		//printf("ft_strncpy: %s\n", temp);
// 		//printf("%s\n", "-----");
// 		//printf("index (1): %zu\n", index);
// 		result[index++] = temp;
// 		//printf("index (2): %zu\n", index);
// 		//printf("%s\n", "-----");
// 		free(temp);
// 		temp = NULL;
// 		//printf("free(temp): %s\n", temp);
// 		//printf("%s\n", "-----");
// 		//printf("s ptr:%p\n", s);
// 		s = s + ft_ptrlen(beg, end);
// 		//printf("s ptr:%p\n", s);
// 		//printf("%c\n", *s);
// 	// }
// 	return (result);
// }