/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/28 17:18:06 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:18:08 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			reduc(t_node *e1, t_node *e2)
{
	e1->a += e2->a * -1;
	e1->b += e2->b * -1;
	e1->c += e2->c * -1;
}
