/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:39:54 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/09 21:22:23 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	istring;
	size_t			isubstring;

	istring = 0;
	isubstring = 0;
	if (s == NULL)
		return (NULL);
	while (istring < start && s[istring] != '\0')
		istring++;
	if (s[istring] != '\0')
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (isubstring < len && s[istring] != '\0')
		{
			str[isubstring] = s[istring];
			isubstring++;
			istring++;
		}
		str[isubstring] = '\0';
		return (str);
	}
	return (NULL);
}
