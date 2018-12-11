/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:07:29 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/08 23:14:45 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t idest;
	size_t isrc;
	size_t i;

	i = 0;
	isrc = 0;
	idest = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[isrc] != '\0' && i < size - 1)
	{
		dst[i] = src[isrc];
		i++;
		isrc++;
	}
	if (size != 0 && size >= idest)
		dst[i] = '\0';
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + idest);
}
