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

static void			are_you_sure(t_node *node, char *base)
{
	char			*tmp0;
	double			tmp1;

	tmp0 = base;
	while ((tmp0 = ft_strchr(tmp0, '-')))
	{
		tmp0++;
		tmp1 = ft_atoi_double(tmp0);
		if (node->a == tmp1)
			node->a *= -1;
		if (node->b == tmp1)
			node->b *= -1;
		if (node->c == tmp1)
			node->c *= -1;
	}
}

t_node				*get_value(char *base, char **split)
{
	int				i;
	char			*tmp;
	t_node			*node;

	i = 0;
	node = new_node();
	while (split[i])
	{
		if ((tmp = ft_strchr(split[i], 'X')))
		{
			if (*(tmp + 2) == '2')
				node->a = ft_atoi_double(split[i]);
			if (*(tmp + 2) == '1')
				node->b = ft_atoi_double(split[i]);
			if (*(tmp + 2) == '0')
				node->c = ft_atoi_double(split[i]);
		}
		i++;
	}
	are_you_sure(node, base);
	return (node);
}
