/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_second.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 16:45:00 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:46:15 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void				print_second(t_node *node)
{
	ft_putstr("Reduced form (ax^2 + bx + c): ");
	ft_putdouble(node->a);
	ft_putstr(" X^2");
	ft_putstr((node->b >= 0) ? " + " : " ");
	ft_putdouble(node->b);
	ft_putstr(" X");
	ft_putstr((node->c >= 0) ? " + " : " ");
	ft_putdouble(node->c);
	ft_putendl(" = 0");
}
