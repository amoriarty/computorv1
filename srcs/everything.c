/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   everything.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/28 17:17:51 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:17:53 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			everything(t_node *e1, t_node *e2)
{
	if (e1->a == e2->a && e1->b == e1->b && e1->c == e2->c)
		ft_puterror("computor", "Every solution is possible");
}
