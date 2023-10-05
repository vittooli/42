/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:47:29 by volivier          #+#    #+#             */
/*   Updated: 2023/10/04 17:32:56 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (base[i])
	{	
		while (base[j])
		{
			if (base[i] == base[j])
				return(0);
			else
				j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ret;

	ret = 0;
	if (!ft_base)
		return(0);
	if 
	ret = ret + (ft_putnbr_base(nbr / 10)
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_base(argv[1]));
	return (0);
}
