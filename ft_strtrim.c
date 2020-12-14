/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:36:09 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/10 16:28:03 by hprudhom         ###   ########lyon.fr   */
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

static int		istrim(char c, char const *set)
{
	int x;

	x = 0;
	while (set[x])
	{
		if (set[x] == c)
			return (1);
		x++;
	}
	return (0);
}

static int		start_trim(char const *s1, char const *set)
{
	int x;

	x = 0;
	while (s1[x] && istrim(s1[x], set))
		x++;			
	printf("debut = %d \n", x);
	return (x);
}

static int		end_trim(char const *s1, char const *set)
{
	int x = ft_strlen(s1) - 1;
	int count;

	while (x >= 0 && istrim(s1[x], set))
		x--;
		printf("fin = %d \n", x);
	return (x);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start__trim;
	int		end__trim;
	int		x;
	char	*str;

	start__trim = start_trim(s1, set);
	end__trim = end_trim(s1, set);
	if (!(str = malloc(sizeof(char) *
	(end_trim - start_trim + 1 + 1))))
		return (NULL);
	x = 0;
	while (start__trim <= end__trim)
	{
		str[x] = s1[start__trim];
		x++;
		start__trim++;
	}
	str[x] = '\0';
	return (str);
}

int main()
{
	char s1[] = "          ";
	printf("%s \n", ft_strtrim(s1, " "));
	return 0;
}
