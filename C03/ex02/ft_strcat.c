/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:53:51 by volivier          #+#    #+#             */
/*   Updated: 2023/09/26 19:03:48 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	
#include <string.h>

int	find_last(char *dest)
{
	int	a;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = find_last(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
