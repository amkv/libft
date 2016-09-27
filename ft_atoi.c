/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 18:07:21 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/26 18:07:22 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_witespases(char *str);

int		main(void)
{
	char	*str;

	str = " d32-10s";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}


// int		ft_atoi(const char *str)
// {
// 	int		ans;
// 	int		sign;

// 	// while (ft_isspace(*str))
// 	// 	++str;
// 	sign = *str == '-' ? -1 : 1;
// 	if (*str == '+' || *str == '-')
// 		++str;
// 	ans = 0;
// 	while (ft_isdigit(*str))
// 		ans = 10 * ans + sign * (*str++ - '0');
// 	return (ans);
// }


int		ft_atoi(const char *str)
{
	int		result;
	int		minus;
	char	tempstr;

	minus = 1;
	result = 0;
	tempstr = (char*)str;
	ft_witespases(tempstr);
	if (*str == '-')
		minus = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + minus * (*str - '0');
		str++;
	}
	return (result);
}

// char	*ft_witespases(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		if (*str == ' ')
// 		{
// 			while (*str + 1 != ' ' || *str != '\0')
// 			{
// 				*str = *str + 1;
// 				str++;
// 			}
// 			str++;
// 		}
// 		str++;
// 	}
// 	return ((char*)str);
// }


char 	ft_witespases(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			while (str[i] != ' ' || str[i] != '\0')
			{
				str[i] = str[i + 1];
				i++;
			}
		}
		i++;
	}
}

// int		ft_atoi(const char *str)
// {
// 	int	result;
// 	int	minus;

// 	minus = 1;
// 	result = 0;
// 	while (*str != '\0' || (*str < 48 && *str > 57))
// 	{	
// 		result++;
// 		str++;
// 	}
// 	return (result);
// }



// int		ft_atoi(const char *str)
// {
// 	int	result;
// 	int	minus;

// 	minus = 1;
// 	result = 0;
// 	while (*str != '\0' || (*str <= '/' && *str >= ':'))
// 	{
// 		// if (*str == '-' && minus != -1)
// 		// {
// 		// 	minus = -1;
// 		// 	str++;
// 		// }
		
// 		if (*str >= '0' && *str <= '9')
// 		{
// 			result = result + (*str - 48) * 10;
// 			printf("%d\n", result);
// 			str++;
// 			if (*str <= '/' && *str >= ':')
// 				return (result);
// 			else
// 				str--;
// 		}
// 		// if (*str <= '/' && *str >= ':')
// 		// 	return (0);
// 		str++;
// 	}
// 	return (result);
// }



