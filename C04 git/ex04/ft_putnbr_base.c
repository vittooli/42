/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:18:04 by volivier          #+#    #+#             */
/*   Updated: 2023/10/10 12:45:56 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len_base(char *base)
{
	int	i;

	i = 0;
	while(base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == '+' || base[j] == '-')
				return (0);
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_len_base(base);
	if ((len >= 2) && (ft_check_base(base) == 1))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr < len)
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
	}
}

/*int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]); 
}*/
