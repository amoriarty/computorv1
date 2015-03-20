/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 11:27:58 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 15:52:28 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static void			swap(char **a, char **b)
{
	char			*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

static void			tri(t_node *node)
{
	int				i;

	i = -1;
	while (node->b[++i])
	{
		if (node->b[i] == '^' && node->a[i + 1] == '2')
			swap(node->a, node->b);
	}
	i = -1;
	while (node->c[i++])
	{
		if (node->c[i] == '^' && node->c[i + 1] == '2')
			swap(node->a, node->c);
		if (node->c[i] == 'X' && node->c[i + 2] != '2')
			swap(node->b, node->c);
	}
}

static int			ft_len(char *base, int start)
{
	int				len;

	len = 0;
	while (base[start + len]
			&& base[start + len] != '+' && base[start + len] != '-')
		len++;
	return (len - 1);
}

t_node				*parsing(char *base)
{
	int				start;
	int				len;
	t_node			*node;

	start = 0;
	node = new_node();
	len = ft_len(base, start);
	node->a = ft_strsub(base, start, len);
	start += len + 2;
	len = ft_len(base, start);
	node->b = ft_strsub(base, start, len);
	start += len + 2;
	len = ft_len(base, start);
	node->c = ft_strsub(base, start, len);
	tri(node);
	return (node);
}
