/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:31:08 by jmartyn-          #+#    #+#             */
/*   Updated: 2018/11/22 18:12:23 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		++i;
	}
	return (res);
}
