/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:29:00 by volivier          #+#    #+#             */
/*   Updated: 2023/10/03 13:03:55 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb ==  0)
		return (0);
	int	ret;

	ret = 1;
	if (power == 0)
		return (ret);
	else if (power < 0)
		return(0);
	if (nb < 0)
	{
		if (power % 2 == 0)
			ret = nb * ft_recursive_power(nb, power - 1);
		else if (power % 2 != 0)
			ret = nb * ft_recursive_power(nb, power - 1);
	}
	else if (nb > 0)
		ret = nb * ft_recursive_power(nb, power - 1);
	return (ret);
}
