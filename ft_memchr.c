/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:46:42 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/18 14:11:56 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	find;
	size_t			i;

	ptr = (unsigned char *)s;
	find = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (ptr[i] == find)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
