/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 22:53:18 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/09 21:55:28 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nw;
	int		index;

	if (s == NULL)
		return (NULL);
	index = 0;
	nw = count_words((char *)s, c);
	t = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nw--)
	{
		while (*s != '\0' && *s == c)
			s++;
		t[index] = ft_strsub((char *)s, 0, (ft_wordlen((char *)s, c) + 1));
		if (t[index] == NULL)
			return (NULL);
		t[index][ft_wordlen((char *)s, c)] = '\0';
		s = s + ft_wordlen((char *)s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
