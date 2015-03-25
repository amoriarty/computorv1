/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_new_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:18:58 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:19:06 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

char			*create_new_base(t_node *node)
{
	char		*res;

	res = NULL;
	if (node->a != 0)
	{
		res = ft_strjoin(ft_dtoa(node->a), " * X^2 ");
		res = (node->b >= 0) ? ft_strjoin(res, "+ ") : res;
	}
	res = ft_strjoin(res, ft_dtoa(node->b));
	res = ft_strjoin(res, " * X^1 ");
	res = (node->c >= 0) ? ft_strjoin(res, "+ ") : res;
	res = ft_strjoin(res, ft_dtoa(node->c));
	return (res);
}
