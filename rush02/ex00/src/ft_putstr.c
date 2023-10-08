/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:59:57 by frpelill          #+#    #+#             */
/*   Updated: 2023/09/26 19:41:56 by frpelill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}
