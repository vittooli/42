/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:26:35 by volivier          #+#    #+#             */
/*   Updated: 2023/10/05 15:53:39 by volivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	if (src[i] == 0)
		return (0);
	str = malloc(i + 1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

/*int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s", ft_strdup(argv[1]));
	return (0);
}*/
