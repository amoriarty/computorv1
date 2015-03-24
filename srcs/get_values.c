/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 11:08:49 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:39:37 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

int				get_value(t_node *node)
{
	int				i;
	char			*tmp;

	i = 0;
	while (node->d[i])
	{
		ft_putendl(node->d[i]);
		if ((tmp = ft_strchr(node->d[i], 'X')))
		{
			if (*(tmp + 2) == '2')
				node->a += ft_atoi_double(node->d[i]);
			if (*(tmp + 2) == '1')
				node->b += ft_atoi_double(node->d[i]);
			if (*(tmp + 2) == '0')
				node->c += ft_atoi_double(node->d[i]);
		}
		i++;
	}
	return (SUCCESS);
}
