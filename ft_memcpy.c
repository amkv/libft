/* ************************************************************************** */
/* Artem kalmykov <kalmykov.artem@gmail.com>                  ##     ##    ## */
/* http://kalmykov.pro                                       ####    ##  ##   */
/*                                                          ##  ##   ####     */
/* student at 42 University     http://42.us.org           ########  ##  ##   */
/*     #42Born2CodeUS           http://42.fr              ##      ## ##    ## */	  
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;

	ptr = dst;
	while (n > 0)
	{
		*(unsigned char*)dst = *(unsigned char*)src;	
		n--;
		dst++;
		src++;
	}
	return (ptr);
}
