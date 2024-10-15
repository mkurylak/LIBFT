/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:53:48 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/13 17:04:51 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)

{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
	}
	dest = malloc(sizeof(const char) * i + 1);
	if (!dest)
		return (NULL);
	while (s[j])
	{
		dest[j] = s[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
