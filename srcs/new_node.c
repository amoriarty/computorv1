/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 12:11:07 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 12:22:40 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

t_node				*new_node(void)
{
	t_node			*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		ft_puterror("computor", "struct can't be malloc");
	new->a = NULL;
	new->b = NULL;
	new->c = NULL;
	new->sign = 0;
	return (new);
}
