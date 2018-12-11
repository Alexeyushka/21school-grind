/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:40:06 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/09 20:37:07 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	number;

	number = 0;
	i = 0;
	sign = 1;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11
			|| str[i] == 12 || str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
		if (number >= 9223372036854775807)
			return (sign == 1 ? -1 : 0);
	}
	return (number * sign);
}
