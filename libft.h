/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalmyko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 11:59:24 by akalmyko          #+#    #+#             */
/*   Updated: 2016/09/21 11:59:31 by akalmyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MACROS and typedef */

#ifndef LIBFT.H

# define LIBFT.H
#include string.h

/* list of functions */
/* ft_memset */
/* ft_bzero */
/* ft_memcpy */
/* ft_memccpy */
/* ft_memmove */
/* ft_memchr */
/* ft_memcmp */
/* ft_strlen */
/* ft_strdup */
/* ft_strcpy */
/* ft_strncpy */
/* ft_strcat */
/* ft_strlcat */
/* ft_strchr */
/* ft_strrchr */
/* ft_strstr */
/* ft_strnstr */
/* ft_strcmp */
/* ft_strncmp */
/* ft_atoi */
/* ft_isalpha */
/* ft_isdigit */
/* ft_isalnum */
/* ft_isascii */
/* ft_isprint */
/* ft_toupper */
/* ft_tolower */

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	





/* NULL and size_t */
/* allowed functions: 
	malloc(3)
	free(3)
	write(2) */

#endif
