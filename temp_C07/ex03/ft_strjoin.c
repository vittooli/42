/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:54:27 by volivier          #+#    #+#             */
/*   Updated: 2023/10/05 19:50:53 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_len(char **strs, int size)
{
	int	i;
	int total;
	int	j;
	char *str_pt;

	i = 0;
	total = 0;
	while(i < size)
	{
		str_pt = strs[i];
		j = 0;
		while (str_pt[j] != '\0')
			j++;
		total += j;
		i++;
	}
	return(total);
}

char	*ft_fill(int size, int k, char *sep, char *ret, char **strs)
{
	int i; 
	int j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			ret[k] = strs[j][i];
			i++;
			k++;
		}
		j++;
		i = 0;
		while (sep[i] != '\0' && j != (size))
		{
			ret[k] = sep[i];
			i++;
			k++;
		}
	}
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;
	int		i;
	int		len;
	int		j;
	int		k;

	len = ft_len(strs, size) + (size - 1)*ft_strlen(sep); 
	ret = (char*)malloc(len);
	if (size == 0)
	{
		ret = (char*)malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	i = 0;
	k = 0;
	j = 0;
	ft_fill(size, i, sep, ret, strs);
	ret[k] = '\0';
	return (ret);
}

int	main()
{
	char	*strs[3] = {"hello","good","hi"};
	char	sep[] = ",,,";
	int i = 0;
	int size = 3;

	while (i < size)
	{
		printf("%s\n", ft_strjoin(3, strs, sep));
		i++;
	}	
	return (0);
}
