/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:21:21 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/10 15:22:42 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		x;
	int		y;

	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		str[y] = s1[x];
		y++;
		x++;
	}
	x = 0;
	while (s2[x])
	{
		str[y] = s2[x];
		y++;
		x++;
	}
	str[y] = '\0';
	return (str);
}

int main()
{	
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

	s2[0] = '\0';
	s1[0] = '\0';
	printf("%s \n", ft_strjoin(s1, s2));
	return 0;
}
