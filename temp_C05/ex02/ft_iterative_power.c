/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:58:53 by volivier          #+#    #+#             */
/*   Updated: 2023/10/02 20:38:41 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (ret);
	while (power--)
		ret = ret * nb;
	return (ret);
}

/*int main(int argc, char **argv)
{
	if(argc == 3)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
}*/
