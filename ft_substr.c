/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:40:05 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/11 18:38:59 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		x;
	char				*dst;

	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	x = 0;
	if (start > (unsigned int)ft_strlen(s))
	{
		dst[x] = '\0';
		return (dst);
	}
	while (x < len)
	{
		dst[x] = s[start];
		x++;
		start++;
	}
	dst[x] = '\0';
	return (dst);
}
