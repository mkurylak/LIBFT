/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:44:53 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/19 17:25:02 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	j = -1;
	len = (ft_strlen(s1) + ft_strlen(s2));
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s1[++i])
		tab[i] = s1[i];
	while (s2[++j])
		tab[i + j] = s2[j];
	tab[i + j] = '\0';
	return (tab);
}
