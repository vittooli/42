/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:14:21 by volivier          #+#    #+#             */
/*   Updated: 2023/10/04 16:31:27 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else
		while (i < (nb / 2 + 1))
		{
			if (nb % i == 0)
				return (0);
			else 
				i++;
		}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0) 
		return(2);
	while(!ft_is_prime(nb) && nb <= 2147483647)
		nb++;
	return(nb);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	return(0);
}*/
