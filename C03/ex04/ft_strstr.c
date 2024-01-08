/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:54:07 by volivier          #+#    #+#             */
/*   Updated: 2023/10/03 16:56:22 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	check(char *str, char *to_find, int *i, int *j)
{
	while (str[*j] == to_find[*i] && to_find[*i] != '\0' && str[*j] != '\0')
	{
		*i += 1;
		*j += 1;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	ret;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[i])
		{
			ret = j;
			check(str, to_find, &i, &j);
			if (i == str_len(to_find))
				return (str + ret);
			else
			{
				j = ret + 1;
				i = 0;
			}
		}
		j++;
	}
	return (0);
}
