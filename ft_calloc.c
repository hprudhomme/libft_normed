/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:10:56 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/10 16:09:57 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (!(ptr = malloc(sizeof(void) * (size * nmemb))))
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}
