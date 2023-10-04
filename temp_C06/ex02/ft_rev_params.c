/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:34:05 by volivier          #+#    #+#             */
/*   Updated: 2023/10/03 18:36:34 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int i;
	int	j;

	i = argc - 1;
	while(i > 0)
	{
		j = 0;
		while(argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

