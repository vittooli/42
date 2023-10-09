/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:07:01 by volivier          #+#    #+#             */
/*   Updated: 2023/10/09 14:10:30 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index)
{
	int	ret;

	ret = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (ret);
	else
		ret = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (ret);
}
