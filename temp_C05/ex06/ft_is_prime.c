/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:11:03 by volivier          #+#    #+#             */
/*   Updated: 2023/10/04 16:34:51 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h> 
int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb <= 1)
		return (0);
	else
		while (i < (nb / 2 + 1))
		{
			if (nb % i == 0)
				return (0);
			else 
				i++;
		}
	return (1);
}
