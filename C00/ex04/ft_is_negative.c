/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:43:25 by volivier          #+#    #+#             */
/*   Updated: 2023/09/20 20:04:00 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	s;

	if (n >= 0)
	{
		s = 'P';
		write(1, &s, 1);
	}
	else if (n < 0)
	{
		s = 'N';
		write(1, &s, 1);
	}
}