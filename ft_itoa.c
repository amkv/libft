/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 10:05:18 by akalmyko          #+#    #+#             */
/*   Updated: 2016/10/03 10:07:42 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate (with malloc(3)) and returns a “fresh” string ending
** with ’\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.
*/

// int		main(void)
// {
// 	char	n;

// 	n = 'd';
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }

// char	*ft_itoa(int n)
// {
// 	char	*result;
// 	printf("%c\n", n);


// 	result = NULL;
// 	return (result);
// }

////////////////////////////////////////////////////////////
// char	*ft_strrev(char *str)
// {
// 	char	*p1;
// 	char	*p2;
// 	char	temp;

// 	if (!str || !*str)
// 		return (str);
// 	p1 = str;
// 	p2 = str + ft_strlen(str) - 1;
// 	while (p2 > p1)
// 	{
// 		temp = *p2;
// 		*p2 = *p1;
// 		*p1 = temp;
// 		++p1;
// 		--p2;
// 	}
// 	return (str);
// }

// int		chars(int n)
// {
// 	int c;

// 	c = (n < 0) ? 2 : 1;
// 	while (n && (n /= 10))
// 		c++;
// 	return (c);
// }

// char	*ft_itoa(int n)
// {
// 	char	*ret;
// 	int		neg;
// 	int		index;

// 	index = 0;
// 	ret = ft_strnew(chars(n));
// 	if (!ret)
// 		return (NULL);
// 	neg = (n < 0) ? 1 : 0;
// 	while (n)
// 	{
// 		ret[index++] = (n % 10 > 0) ? (n % 10 + '0') : (n % 10 * (-1) + '0');
// 		n /= 10;
// 	}
// 	if (neg)
// 		ret[index++] = '-';
// 	if (ret[0] == 0)
// 		ret[0] = '0';
// 	return (ft_strrev(ret));
// }
/////////////////////////////////////////////////////////////////////

// github
char		*ft_itoa(int n)
{
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char*)malloc(sizeof(char) * 2);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}