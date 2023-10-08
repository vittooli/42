/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:59:01 by frpelill          #+#    #+#             */
/*   Updated: 2023/10/07 18:06:21 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
unsigned long long int	ft_atoi(const char *str)
{
	unsigned long long int	res;
	int						sign;
	int						i;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' )
		i++;
	while (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
