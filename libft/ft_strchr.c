/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 16:10:19 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/11/26 19:34:55 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *string;

	string = (char *)str;
	while (*string != c)
	{
		if (*string == '\0')
		{
			return (NULL);
		}
		string++;
	}
	return (string);
}
