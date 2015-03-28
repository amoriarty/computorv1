/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 15:27:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int				bullshit(char i)
{
	if (i == 'X')
		return (TRUE);
	if (i == '^')
		return (TRUE);
	if (i == '+')
		return (TRUE);
	if (i == '=')
		return (TRUE);
	if (i == ' ')
		return (TRUE);
	if (ft_isdigit(i) == TRUE)
		return (TRUE);
	if (i == '-')
		return (TRUE);
	if (i == '*')
		return (TRUE);
	if (i == '.')
		return (TRUE);
	return (FALSE);
}

static void				format(char *base)
{
	int					i;

	i = -1;
	while (base[++i])
	{
		if (bullshit(base[i]) == FALSE)
			ft_puterror("computor", "don't bullshit me !");
	}
}

int						main(int ac, char **av)
{
	char				*tmp;

	if (ac != 2)
		ft_puterror("computor", "error");
	if (!(tmp = ft_strchr(av[1], '=')) || ft_strchr(tmp + 1, '='))
		ft_puterror("computor", "error");
	if (*tmp && !(*(tmp + 1)))
		ft_puterror("computor", "error");
	format(av[1]);
	computor(av[1]);
	return (42);
}
