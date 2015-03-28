/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:18:43 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:17:46 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static void		get_e2(t_node *e2, char *equ)
{
	if (!ft_strcmp(equ, " 0"))
		return ;
	if (!ft_strchr(equ, 'X'))
		ft_puterror("computor", "error");
	get_value(e2);
}

int				computor(char *base)
{
	t_node		*e1;
	t_node		*e2;
	char		**equ;

	verif_x(base);
	e1 = new_node();
	e2 = new_node();
	equ = ft_strsplit(base, '=');
	e1->d = ft_split(equ[0]);
	e2->d = ft_split(equ[1]);
	verif_split(e1);
	get_value(e1);
	get_e2(e2, equ[1]);
	everything(e1, e2);
	reduc(e1, e2);
	return (solver(e1));
}
