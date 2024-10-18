/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:31:24 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/18 15:46:06 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	size_t	count;

	if (nmemb == 0 || size == 0)
	{
		res = malloc(0);
		return (res);
	}
	count = (size * nmemb);
	res = malloc(count);
	if (!res)
		return (NULL);
	while (count > 0)
	{
		res[count - 1] = '\0';
		count--;
	}
	return ((void *) res);
}
