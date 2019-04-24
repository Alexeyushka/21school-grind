/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:12:28 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/12/10 22:40:18 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int i)
{
	if (i == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (i < 0)
		{
			ft_putchar('-');
			i = -i;
		}
		if (i >= 10)
			ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
}
