/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:13:54 by volivier          #+#    #+#             */
/*   Updated: 2023/10/12 19:16:39 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_len(char *str)
{
	int i = -1;
	while (str[++i]);
	return (i);
}

int	checkbase(char *base)
{
	int	i = -1;
	int	j = 0;

	if(!*base || ft_len(base) == 1)
		return(0);
	while (base[++i])
	{
		j = i;
		while(base[++j])
		{
			if (base[j] == base[i])
				return (0);
		}
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <=13) || base[i] == '+' || base[i] == '-')
			return (0);
	}
	return (1);
}

int	ft_pow(int a, int b)
{
	int c;
	int	i;

	i = 0;
	c = a;
	if (b == 0)
		return (1);
	while(++i < b)
		a *= c;
	return(a);
}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int num;

	i = ft_len(str);
	j = -1;
	num = 0;
	while (str[--i] != '-' && str[i] != '+' && checkbase(base))
	{
		j = 0;
		while (base[++j])
		{
			if (str[i] == base[j])
			{
				num += j * ft_pow(ft_len(base), ft_len(str) -1 - i);
			}
		}
	}
	return(num);
}

int main()
{
	printf("%d", ft_atoi_base("co", "civvao"));
}
