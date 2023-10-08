/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:15:15 by frpelill          #+#    #+#             */
/*   Updated: 2023/10/07 19:15:19 by frpelill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_input(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc != 2 && argc != 3)
		return (1);
	if (argc == 2)
	{
		if (ft_is_numeric(argv[1]))
			nb = 1;
	}
	else if (argc == 3)
	{
		if (ft_is_numeric(argv[2]))
			nb = 2;
	}
	return (ft_atoi(argv[nb]));
}

