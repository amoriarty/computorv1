/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:21:12 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:21:23 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static void		delta_zero(t_node *node)
{
	double		res;

	ft_putendl("Descriminant is zero: there's one solution");
	res = (node->b * -1) / (2 * node->a);
	ft_putdouble(res);
	ft_putchar(EOL);
}

static void		delta_two(t_node *node, double delta)
{
	double		r1;
	double		r2;

	ft_putstr("Descriminant is strictly positive: ");
	ft_putendl("there's two solutions");
	r1 = ((node->b * -1) - ft_sqrt(delta)) / (2 * node->a);
	r2 = ((node->b * -1) + ft_sqrt(delta)) / (2 * node->a);
	ft_putdouble(r1);
	ft_putchar(EOL);
	ft_putdouble(r2);
	ft_putchar(EOL);
}

int				solve_two(t_node *node)
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
		ft_putendl("there's no solution");
	}
	return (SUCCESS);
}
