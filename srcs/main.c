#include "computor.h"
#include <stdio.h>

int			main(int ac, char **av)
{
	if (ac != 3)
		return (ERROR);
	ft_putnbr(ft_sqrt(ft_atoi(av[1]), ft_atoi(av[2])));
	return (42);
}
