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

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h> // NULL, size_t
# include <stdlib.h> // malloc, free
# include <unistd.h> // write

/* DONE */
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little); // доразобраться
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/* ADDONS */
int		ft_isspace(int c);

/* IN PROGRESS */
/* ft_strlcat */
size_t	ft_strlcat(char *dst, const char *src, size_t size); // NOT OK
/* ft_strncat */
char	*ft_strncat(char *s1, const char *s2, size_t n);
/* ft_strnstr */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/* ft_strcmp */
int		ft_strcmp(const char *s1, const char *s2); // NOT OK
/* ft_strncmp */
int		ft_strncmp(const char*s1, const char *s2, size_t n); // NOT OK
/* ft_atoi */
int		ft_atoi(const char *str);

/* ft_memset */
//void	*ft_memset(void *b, int c, size_t len);
/* ft_bzero */
//void	ft_bzero(void *s, size_t n);
/* ft_memcpy */
/* ft_memccpy */
/* ft_memmove */
/* ft_memchr */
/* ft_memcmp */



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

/*
1.
+ strlen
+ isalpha
+ isdigit
+ isalnum
+ isascii
+ isprint

2.
+ toupper
+ tolower
memchr
+ strchr
+ strrchr
bzero

3.
memcpy
+ strcpy
+ strcat
strcmp
+ strstr
memmove
memcmp

4.
strlcat
+ strdup
atoi
memccpy
strnstr
strncmp
+ strncpy
strncat

memset
*/

#endif
