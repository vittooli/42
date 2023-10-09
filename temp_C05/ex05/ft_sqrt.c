/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:30:35 by volivier          #+#    #+#             */
/*   Updated: 2023/10/09 14:12:05 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		if (i * i == nb)
			return (i);
		else if (i * i < nb)
			i++;
		else
			return (0);
	}
	return (0);
}
