/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:41:01 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/11/21 17:48:35 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	if (min >= max)
	{
		return (NULL);
	}
	str = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (max > min)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
