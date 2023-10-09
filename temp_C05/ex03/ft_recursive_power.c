/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:29:00 by volivier          #+#    #+#             */
/*   Updated: 2023/10/09 18:02:52 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int main(int argc, char **argv)
{
	if(argc == 3)
		printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}*/
