/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:04:11 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/09 20:44:22 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memset(str, 0, size);
	return (str);
}
