/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:57:54 by makuryla          #+#    #+#             */
/*   Updated: 2024/10/18 18:28:44 by makuryla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest
	

	i = 0;
	dest = ft_calloc(ft_strlen(s) + 1 * sizeof(char))
	if (!s || !f)
		return ;
	while (s[i])
	{
		*dest = f(i, &s[i]);
		i++;
	}
	return(dest);
}