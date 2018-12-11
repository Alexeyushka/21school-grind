/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:49:08 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/10 23:18:14 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*destination;
	size_t			i;

	i = 0;
	destination = (unsigned char *)s;
	while (n > i)
	{
		if (destination[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
