
#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;
	
	arr = (int*)malloc((max - min) *sizeof(int));
	i = 0;
	j = min;
	while (i < (max - min))
	{
		arr[i] = j;
		j++;
		i++;
	}
	return (arr);
}

/*int	main()
{	
	int *arr = ft_range(-100, 100);
	int i = 0;
	while(i < 200)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}*/
