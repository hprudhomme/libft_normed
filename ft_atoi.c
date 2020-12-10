/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:03:53 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/10 14:10:13 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int res;
	int i;

	i = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		i++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit((int)*str))
	{
		res = (res * 10) + *str - 48;
		str++;
	}
	return (res * sign);
}
