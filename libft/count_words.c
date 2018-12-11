/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 00:11:06 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/05 00:13:41 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char *s, char c)
{
	int words;
	int in_substring;

	in_substring = 0;
	words = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
		{
			in_substring = 0;
		}
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			words++;
		}
		s++;
	}
	return (words);
}
