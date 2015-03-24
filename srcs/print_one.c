/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_second.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 16:45:00 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:54:30 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void				print_one(t_node *node)
{
	ft_putstr("Reduced form : ");
	ft_putdouble(node->b);
	ft_putstr(" X");
	ft_putstr((node->c >= 0) ? " + " : " - ");
	ft_putdouble((node->c >= 0)? node->c : node->c * -1);
	ft_putendl(" = 0");
}
