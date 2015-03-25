/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:18:43 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 15:43:10 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int		go(t_node *node, char *base)
{
	node->deg = degres(base);
	node->deg -= (node->deg == 2 && node->a == 0) ? 1 : 0;
	if (node->deg == 1 && node->b == 0)
		ft_puterror("computor", "is not an equation");
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

static void		reduc(t_node *node)
{
	t_node		*tmp;

	tmp = new_node();
	tmp->d = ft_split(node->e[1]);
	verif_split(tmp);
	get_value(tmp);
	node->a += tmp->a * -1;
	node->b += tmp->b * -1;
	node->c += tmp->c * -1;
}

int				computor(char *base)
{
	char		*to_go;
	t_node		*node;

	to_go = base;
	node = new_node();
	node->e = ft_strsplit(base, '=');
	everything(node->e[0], node->e[1]);
	node->d = ft_split(node->e[0]);
	verif_split(node);
	get_value(node);
	if (ft_strcmp(node->e[1], " 0"))
	{
		reduc(node);
		to_go = create_new_base(node);
	}
	return (go(node, to_go));
}
