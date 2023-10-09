/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:04:02 by volivier          #+#    #+#             */
/*   Updated: 2023/10/09 18:03:59 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ret = ret * nb;
		nb--;
	}
	return (ret);
}

/*int main(int argc, char **argv)
{
	if(argc == 2)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
}*/
