/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hprudhom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:05:59 by hprudhom          #+#    #+#             */
/*   Updated: 2020/12/16 16:36:42 by hprudhom         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

static char				**ft_second_malloc(char **tab, char const *s, char c)
{
	int i;
	int x;
	int count;

	x = 0;
	i = 0;
	count = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		count = 0;
		while (s[x] != c && s[x])
		{
			x++;
			count++;
		}
		if (count != 0)
		{	
			// printf("%d \n", count + 1);
			if (!(tab[i] = malloc(sizeof(char*) * (count))))
				return (NULL);
			i++;
		}
	}
	return (tab);
}

static char				**ft_first_malloc(char **tab, char const *s, char c)
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		while (s[x] != c && s[x])
		{
			if (s[x - 1] == c || x == 0)
				count++;
			x++;
		}
	}
	// printf("%d \n", count + 1);
	if (!(tab = (char **)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	return (tab);
}

static char				**ft_spliting(char **tab, char const *s, char c)
{
	int		x;
	int		ligne;
	int		col;

	ligne = 0;
	col = 0;
	x = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		col = 0;
		while (s[x] != c && s[x])
		{
			tab[ligne][col] = s[x];
			x++;
			col++;
			if (s[x] == c || !(s[x]))
			{
				// printf("ligne : %d || col : %d \n", ligne, col);
				tab[ligne][col] = '\0';
				ligne++;
			}
		}
	}
	// printf("last ligne : %d \n", ligne);
	tab[ligne] = NULL;
	return (tab);
}

char					**ft_split(char const *s, char c)
{
	char	**tab;

	tab = NULL;
	if ((tab = ft_first_malloc(tab, s, c)) == NULL)
		return (NULL);
	if ((tab = ft_second_malloc(tab, s, c)) == NULL)
		return (NULL);
	tab = ft_spliting(tab, s, c);
	return (tab);
}

// int main()
// {
// 	char **tab;
// 	int x = 0;
// 	tab = ft_split("  tripouille  42  ", ' ');
// 	while (tab[x])
// 	{
// 		printf("ligne %d : %s \n", x, tab[x]);
// 		x++;
// 	}
// 	int y = 0;
// 	int i = 0;
// 	while (tab[0][y])
// 	{
// 		i++;
// 		y++;
// 	}
// 	printf("%d \n", i);
// 	return 0;
// }
