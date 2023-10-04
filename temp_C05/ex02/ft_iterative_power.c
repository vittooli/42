/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:58:53 by volivier          #+#    #+#             */
/*   Updated: 2023/10/02 20:38:41 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	int	ret;

	ret = 1;
	if (power == 0)
		return (ret);
	if (nb > 0)
	{
		while (power--)
			ret = ret * nb;
	}
	else
	{
		while (power--)
		{
			if (power % 2 == 0)
				ret = (ret* nb);
			else
				ret = ret * nb;
		}
	}
	return (ret);
}
