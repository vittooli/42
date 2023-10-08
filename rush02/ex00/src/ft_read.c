/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frpelill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:10:59 by frpelill          #+#    #+#             */
/*   Updated: 2023/10/07 17:10:54 by ldi-bell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "my_lib.h"
#include <unistd.h>
#include <fcntl.h>

int count_non_empty_lines(const char *filename) 
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1) 
	{
        return -1;
    }
    int count = 0;
    char buffer[1];
    char prev_char = '\n';

    while (read(fd, buffer, 1) > 0) 
	{
        if (buffer[0] == '\n') 
		{
            if (prev_char != '\n')
                count++;
        }
        prev_char = buffer[0];
    }
    close(fd);
    return count;
}

t_list	*ft_read(const char *filename) 
{
	int		i;
	int		fd;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !(tab = malloc(sizeof(t_list) * count_non_empty_lines(filename))))
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	} 
	i = -1;
	while (++i < count_non_empty_lines(filename))
	{
		tab[i].nb = ft_atoi(ft_getnumb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
	}
	close(fd);
	return (tab);
}
