/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:40:05 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/10 15:41:28 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		x;
	int					y;
	char				*dst;

	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (x < start)
		x++;
	y = 0;
	while (x < len && s[x])
	{
		dst[y] = s[x];
		x++;
		y++;
	}
	return (dst);
}
