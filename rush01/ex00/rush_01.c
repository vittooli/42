/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:14:13 by dcarrett          #+#    #+#             */
/*   Updated: 2023/10/01 22:20:30 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*function that checks if input is correct*/
int	ft_input(char **argv)
{
	int i;

	i = 0;
	while(argv[1][i])
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] >= '1' && argv[1][i] <= '4')
				i++;
			else
				return (0);
		}
		else if (i % 2 != 0)
		{
			if (argv[1][i] == 32)
				i++;
			else
				return (0);
		}
	}
	if (i != 31)
		return (0);
	return (1);
}

int *tab(char **argv) // funzione dei palazzi
{
	char	matrix[4][4];
	int i;
	int c;
	
	i = 0;
	while (i <= 6)
	{
		c = i/2;
		if (argv[1][i] == '1')
		{
			if(argv[1][i] == '1' && argv[1][i + 8] == '2')
			{	
				matrix[0][c] = '4';
				matrix[3][c] = '3';
			}
			else
				matrix[0][c] = '4';
		}	
		if (argv[1][i] == '2')
			matrix[1][c] = '4';
	    if(argv[1][i] == '3' && argv[1][i + 8] == '2')
			matrix[2][c] = '4';
		if (argv[1][i] == '4')
		{
			matrix[0][c] = '1';
			matrix[1][c] = '2';
			matrix[2][c] = '3';
			matrix[3][c] = '4';
		}
		i++;
	}
	return(0);
}

void	ft_print(char **matrix, int c)
{	
	int	r;
	
	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			if (matrix[r][c] >= '1' && matrix[r][c] <= '4')
				printf("%c ", matrix[r][c]);
			else
				printf("x ");
			c++;
		}
		printf("\n");
		r++;
	}
} 

int	main(int argc, char **argv, char **matrix)
{
	int	c;

	c = 0;
	if (argc != 2)
	{
		printf("errore argomenti");
		return (0);
	}
	if (ft_input(argv) == 0)
		printf("errore input");
	else
		tab(argv);
	ft_print(matrix, c);
	return (0);
}
