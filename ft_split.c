/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:55:22 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/22 13:44:43 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_freetab(char **tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
}

static	int	ft_countwords(const char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str)
		{
			count++;
			while (*str != sep && *str)
				str++;
		}
	}
	return (count);
}

static int	ft_fill_tab(char **tab, const char *s, char sep)
{
	long int	i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != sep)
				s++;
			tab[i] = ft_substr(start, 0, (s - start));
			if (!tab[i])
			{
				ft_freetab(tab, i);
				return (-1);
			}
			i++;
		}
	}
	tab[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	if (ft_fill_tab(tab, s, c) == -1)
		return (NULL);
	return (tab);
}
