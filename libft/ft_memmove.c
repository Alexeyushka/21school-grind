/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:26:27 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/08 22:04:43 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;
	size_t	i;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
		{
			destination[i] = source[i];
		}
	}
	else
		while (len > 0)
		{
			destination[i] = source[i];
			i++;
			len--;
		}
	return (dst);
}
