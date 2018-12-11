/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:59:11 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/09 21:54:45 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;
	int		beg;
	int		j;

	j = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	beg = -1;
	while (s[++beg] == ' ' || s[beg] == '\t' || s[beg] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (j < len)
		str[j++] = s[beg++];
	str[j] = '\0';
	return (str);
}
