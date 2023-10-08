#include "my_lib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	unsigned long long int nb;
	t_list	*tab;
	int *first;
	int addr_first;
	const char	*filename;

	addr_first = 1;
	first = &addr_first;
	if (ft_check_input(argc, argv) != 0)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		filename = "numbers.dict";
	if (argc == 3)
		filename = argv[1];
	tab = ft_read(filename);
	if (argc == 2)
		nb = ft_atoi(argv[1]);
	if (argc == 3)
		nb = ft_atoi(argv[2]);
	ft_print(nb, tab, first);
}