/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 20:32:13 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/10 23:19:20 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *scanned, const char *searched)
{
	const char	*src;
	const char	*find;

	src = searched;
	find = NULL;
	if (*src == '\0')
		return ((char *)scanned);
	while (*scanned)
	{
		if (find != NULL && *scanned == *src)
			src++;
		else
		{
			if (find != NULL)
				scanned = find + 1;
			find = NULL;
			src = searched;
		}
		if ((find == NULL && *scanned == *src) && (*(find = scanned)))
			src++;
		if (find != NULL && *src == '\0')
			return ((char *)find);
		scanned++;
	}
	return (*scanned == *src ? (char *)scanned : NULL);
}
