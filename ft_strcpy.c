#include "libft.h"

char    *ft_strcpy(char *dst, const char *src)
{
    size_t i;

    i = ft_strlen(src);
	while (*src != '\0')
		*dst++ = *src++;
	*dst = '\0';
	return (dst - i);
}