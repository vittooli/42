/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:37:30 by volivier          #+#    #+#             */
/*   Updated: 2023/10/06 20:58:42 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char temp;
	int	min;
	
	i = 1;
	while(i < argc)
	{
		min = 1;
		j = i + 1;
		while (j < argc)
		{
			if (argv[j] < argv[min])
				min = j;
			j++;
		}
		temp = argv[i];
		argv[i] = argv[min];
		argv[min] = temp;
		i++;
	}
	return (0);
}
