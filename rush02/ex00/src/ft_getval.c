/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getval.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:26:46 by frpelill          #+#    #+#             */
/*   Updated: 2023/10/07 16:22:14 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


char	*ft_getval(int fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	return (str);
}
