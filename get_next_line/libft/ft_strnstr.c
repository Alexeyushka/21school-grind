/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 20:50:07 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/10 23:20:30 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *scanned, const char *searched, size_t i)
{
	size_t	n;
	size_t	m;

	n = 0;
	m = 0;
	if (scanned != NULL || searched != NULL)
	{
		if (*searched == '\0')
			return ((char *)scanned);
		while (scanned[n] != '\0' && n < i)
		{
			m = 0;
			while (scanned[n + m] && (n + m) < i &&
					scanned[n + m] == searched[m])
				m++;
			if (searched[m] == '\0')
				return ((char *)&scanned[n]);
			n++;
		}
	}
	return (NULL);
}
