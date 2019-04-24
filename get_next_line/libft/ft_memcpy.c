/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 21:10:36 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/08 21:36:41 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	int		i;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (n > 0)
	{
		destination[i] = source[i];
		i++;
		n--;
	}
	return (dst);
}
