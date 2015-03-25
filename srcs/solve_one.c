/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:21:06 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:21:07 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
