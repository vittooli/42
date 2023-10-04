/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:55:56 by volivier          #+#    #+#             */
/*   Updated: 2023/10/02 20:14:48 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	ret;
	int	i;
	
	ret = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		ret = nb * ft_recursive_factorial(nb - 1);
		i++;
	}
	return(ret);
}
