/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:58:03 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/08 20:27:51 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*p;

	p = NULL;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] == (char)c)
		{
			p = ((char *)str + len);
		}
		len++;
	}
	if (str[len] == (char)c)
	{
		p = ((char *)str + len);
	}
	return (p);
}
