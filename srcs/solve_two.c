/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_two.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:21:12 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 16:16:28 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static void		delta_zero(t_node *node)
{
	double		res;

	ft_putendl("Descriminant is zero: there's one solution");
	res = (node->b * -1) / (2 * node->a);
	ft_putstr("X = ");
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
	ft_putstr("X1 = ");
	ft_putdouble(r1);
	ft_putchar(EOL);
	ft_putstr("X2 = ");
	ft_putdouble(r2);
	ft_putchar(EOL);
}

static void		delta_neg(t_node *node, double delta)
{
	double		r;
	double		i;

	ft_putstr("Descriminant strictly negative, ");
	ft_putendl("there's no real solutions");
	ft_putendl("But I'v got two complexes solutions for you");
	r = (node->b * -1) / (2 * node->a);
	i = (ft_sqrt(delta)) / (2 * node->a);
	ft_putstr("X1 = ");
	ft_putdouble(r);
	ft_putstr(" + i * ");
	ft_putdouble(i);
	ft_putchar(EOL);
	ft_putstr("X2 = ");
	ft_putdouble(r);
	ft_putstr(" + i * ");
	ft_putdouble(i);
	ft_putchar(EOL);
}

int				solve_two(t_node *node)
{
	double		delta;

	delta = ft_pow(node->b, 2) - (4 * node->a * node->c);
	if (delta == 0)
		delta_zero(node);
	if (delta > 0)
		delta_two(node, delta);
	if (delta < 0)
		delta_neg(node, -delta);
	return (SUCCESS);
}
