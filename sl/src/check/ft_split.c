/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafounas <aafounas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:16:15 by aafounas          #+#    #+#             */
/*   Updated: 2024/06/11 14:16:17 by aafounas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

static int	ft_count_words(char const *str, char sep)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (words);
}

static int	ft_subcpy(char *str, char **tab, size_t len, int index)
{
	tab[index] = ft_substr(str, 0, len);
	if (!tab[index])
	{
		while (index > 0)
		{
			index--;
			free(tab[index]);
		}
		free(tab);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	int		k;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	tab = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i] && k < ft_count_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i != j && !ft_subcpy((char *)s + j, tab, i - j, k++))
			return (NULL);
	}
	return (tab);
}
