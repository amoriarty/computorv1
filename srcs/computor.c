#include "computor.h"

#include <stdio.h>

static int		go(t_node *node, char *base)
{
	node->deg = degres(base);
	print_degres(node->deg);
	if (node->deg == 2)
	{
		print_second(node);
		return (solve_two(node));
	}
	else if (node->deg == 1)
	{
		print_one(node);
		return (solve_one(node));
	}
	else if (node->deg == 0)
		ft_puterror("computor", "is not an equation");
	return (ERROR);
}

int			computor(char *base)
{
	t_node		*node;

	node = new_node();
	node->e = ft_strsplit(base, '=');
	everything(node->e[0], node->e[1]);
	node->d = ft_split(node->e[0]);
	get_value(node);
	if (ft_strcmp(node->e[1], " 0"))
		node->c += (ft_atoi_double(node->e[1]) * -1);
	if (degres(node->e[1]) == 2)
		ft_puterror("computor", "please, put X^2 to the left");
	return (go(node, base));
}
