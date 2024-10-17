/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:03:44 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/17 18:56:25 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i + start];
		i++;
	}
	return (res);
}
