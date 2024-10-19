/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:00:54 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/19 17:24:50 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	lendest = 0;
	lensrc = 0;
	i = 0;
	if ((!dst || !src) && !size)
		return (0);
	while (dst[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	if (lendest >= size)
		return (lensrc + size);
	while (src[i] && lendest + 1 < size)
	{
		dst[lendest] = src[i];
		lendest++;
		i++;
	}
	dst[lendest] = '\0';
	return (lendest + (lensrc - i));
}
