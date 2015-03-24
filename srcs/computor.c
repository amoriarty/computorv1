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

int			computor(char *base)
{
	t_node		*node;

	node = new_node();
	node->e = ft_strsplit(base, '=');
	everything(node->e[0], node->e[1]);
	node->d = ft_split(node->e[0]);
	get_value(node, base);
	if (ft_strcmp(node->e[1], " 0"))
		node->c += (ft_atoi_double(node->e[1]) * -1);
	print_degres(node->deg = degres(node->e[0]));
	if (node->deg == 2)
		print_second(node);
	else if (node->deg == 1)
		print_one(node);
	if (node->deg == 1)
		return (solve_one(node));
	else if (node->deg == 2)
		return (solve_two(node));
	return (ERROR);
}
