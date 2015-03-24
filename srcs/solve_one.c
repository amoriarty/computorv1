#include "computor.h"

int			solve_one(t_node *node)
{
	double		res;

	res = node->c * -1;
	res /= node->b * -1;
	ft_putendl("The solution is:");
	ft_putdouble(res);
	ft_putchar(EOL);
	return (SUCCESS);
}
