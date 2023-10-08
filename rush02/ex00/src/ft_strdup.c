#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char		*dst;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}