/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/28 17:18:14 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:18:15 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

int			solver(t_node *e1)
{
	int		deg;

	deg = get_degres(e1);
	print_degres(deg);
	if (deg == 2)
	{
		print_second(e1);
		return (solve_two(e1));
	}
	else if (deg == 1)
	{
		print_one(e1);
		return (solve_one(e1));
	}
	return (ERROR);
}
