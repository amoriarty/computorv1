#include "computor.h"

#include <stdio.h>

static int		solve_one(t_node *node)
{
	double		res;

	res = node->c * -1;
	res /= node->b * -1;
	ft_putendl("The solution is:");
	ft_putdouble(res);
	ft_putchar('\n');
	return (SUCCESS);
}

static void		delta_zero(t_node *node)
{
	double		res;

	ft_putendl("Descriminant is zero: there's one solution");
	res = (node->b * -1) / (2 * node->a);
	ft_putdouble(res);
	ft_putchar('\n');
}

static void		delta_two(t_node *node, double delta)
{
	double		r1;
	double		r2;

	ft_putstr("Descriminant is strictly positive: ");
	ft_putendl("there's two solution");
	r1 = ((node->b * -1) - ft_sqrt(delta)) / (2 * node->a);
	r2 = ((node->b * -1) + ft_sqrt(delta)) / (2 * node->a);
	ft_putdouble(r1);
	ft_putchar('\n');
	ft_putchar('-');
	ft_putdouble(r2);
	ft_putchar('\n');
}

static int		solve_two(t_node *node)
{
	double		delta;

	delta = ft_pow(node->b, 2) - (4 * node->a * node->b);
	if (delta == 0)
		delta_zero(node);
	if (delta > 0)
		delta_two(node, delta);
	if (delta < 0)
	{
		ft_putstr("Descriminant strictly negative, ");
		ft_putendl("there's no solutions");
	}
	return (SUCCESS);
}

int			computor(t_node *node, int degres_v)
{
	if (degres_v == 1)
		return (solve_one(node));
	else if (degres_v == 2)
		return (solve_two(node));
	return (ERROR);
}
