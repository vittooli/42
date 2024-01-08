/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:25:43 by volivier          #+#    #+#             */
/*   Updated: 2023/09/22 10:44:02 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_str(int n, char *s)
{
	s[0] = n / 10 + 48;
	s[1] = n % 10 + 48;
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	s[2];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_str(i, s);
			write(1, &s, 2);
			write(1, " ", 1);
			int_to_str(j, s);
			write(1, &s, 2);
			if (i == 98)
			{
				break ;
			}
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
