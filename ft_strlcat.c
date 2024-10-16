/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:00:54 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/16 19:09:27 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t lendest;
	size_t lensrc;
	size_t i;

	lendest = 0;
	lensrc = 0;
	while (src[lensrc] || dst[lendest])
	{
		lendest = lendest + (dst[lendest] != '\0');
		lensrc = lensrc + (src[lensrc] != '\0');
	}
	if (lendest >= size)
		return (lensrc + size);
	i = -1;
	while (src[++i] && lendest + 1 < size)
	{
		dst[lendest] = src[i];
		lendest++;
	}
	dst[lendest] = '\0';
	return (lendest + (lensrc - i));
}
