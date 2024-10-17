/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:31:24 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/17 18:55:17 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;
	size_t	count;

	count = (size * nmemb);
	if (!count)
		count = 1;
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
