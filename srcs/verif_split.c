/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:21:39 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:22:54 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static void		mult(t_node *node, int i)
{
	char		*tmp;

	if ((tmp = ft_strchr(node->d[i], '*')) && !(ft_strchr(tmp, 'X')))
		ft_puterror("computor", "don't bullshit me !");
}

static void		alone(t_node *node, int i)
{
	if (!ft_strcmp(ft_strtrim(node->d[i]), "X"))
		node->b += 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "- X"))
		node->b -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "-X"))
		node->b -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "X^0"))
		node->c += 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^0"))
		node->c -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^0"))
		node->c -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "X^1"))
		node->b += 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^1"))
		node->b -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^1"))
		node->b -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "X^2"))
		node->a += 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^2"))
		node->a -= 1;
	if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^2"))
		node->a -= 1;
}

void			verif_split(t_node *node)
{
	int			i;
	char		*tmp;

	i = -1;
	while (node->d[++i])
	{
		alone(node, i);
		mult(node, i);
		if ((tmp = ft_strchr(node->d[i], '^')))
		{
			if (*(tmp - 1) && *(tmp - 1) != 'X')
				ft_puterror("computor", "don't bullshit me !");
			if (*(tmp + 1)
				&& !(*(tmp + 1) >= '0' && *(tmp + 1) <= '9'))
				ft_puterror("computor", "don't bullshit me !");
		}
		if ((tmp = ft_strchr(node->d[i], 'X')))
		{
			if (!(*(tmp + 1)))
				node->d[i] = ft_strjoin(node->d[i], "^1");
		}
	}
}
