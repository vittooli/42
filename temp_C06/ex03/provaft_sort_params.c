/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:37:30 by volivier          #+#    #+#             */
/*   Updated: 2023/10/03 19:05:32 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_strcmp(char *argv[i], char *argv[i + 1])
{
	int		i;

	i = 0;
	while (argv[j] == argv[j] && (argv[j] != '\0' || argv[j] != '\0'))
		j++;
	return (argv[j] - argv[j]);
}


int	main(int argc, char **argv)
{
	int	i;
	int j;
	
	i = 0;
	j = 0;
	while(i < argc)
	{
		if (str_cmp(argv[i][j], argv[i + 1][j]) > 0)
		{
			temp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = temp;
		}
	}
	i = 0;
	while (i < argc)
	{
		j = 0;
		write(1, &argv[i][j++], 1);
		i++;
	}
	return (0);
}
