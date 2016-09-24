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

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h> // NULL, size_t
# include <stdlib.h> // malloc, free
# include <unistd.h> // write

/* list of functions */

/* ft_memset */
//void	*ft_memset(void *b, int c, size_t len);
/* ft_bzero */
//void	ft_bzero(void *s, size_t n);
/* ft_memcpy */
/* ft_memccpy */
/* ft_memmove */
/* ft_memchr */
/* ft_memcmp */

/* ft_strlen */
size_t	ft_strlen(const char *s); // NULL проверить // OK
/* ft_strdup */
char	*ft_strdup(const char *s1); // OK
/* ft_strcpy */
char	*ft_strcpy(char *dst, const char *src); // NOT OK
/* ft_strncpy */
char	*ft_strncpy(char *dst, const char *src, size_t len); // NOT OK

/* ft_strcat */
char	*ft_strcat(char *s1, const char *s2); // OK
/* ft_strlcat */


/* ft_strchr */
/* ft_strrchr */
/* ft_strstr */
/* ft_strnstr */

/* ft_strcmp */
int		ft_strcmp(const char *s1, const char *s2); // OK
/* ft_strncmp */
int		ft_strncmp(const char*s1, const char *s2, size_t n); // OK

/* ft_atoi */

/* ft_isalpha */
int		ft_isalpha(int c); // OK
/* ft_isdigit */
int		ft_isdigit(int c); // OK
/* ft_isalnum */
int		ft_isalnum(int c); // OK
/* ft_isascii */
int		ft_isascii(int c); // OK
/* ft_isprint */
int		ft_isprint(int c); // OK
/* ft_toupper */
int		ft_toupper(int c); // проверить на STRING 
/* ft_tolower */
int		ft_tolower(int c); // проверить на STRING

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
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
