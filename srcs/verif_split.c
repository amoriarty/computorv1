/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:21:39 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:11:49 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			verif_split(t_node *node)
{
	int			i;

	i = -1;
	while (node->d[++i])
	{
		if (!ft_strchr(node->d[i], 'X'))
			ft_puterror("computor", "error");
	}
}
