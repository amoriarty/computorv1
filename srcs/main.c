/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:57:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

/*
static void				verifx(char *base)
{
	char				*tmp;

	tmp = base;
	while ((tmp = ft_strchr(tmp, 'X')))
	{
		tmp++;
		if (!(*tmp))
			ft_puterror("computor", "don't bullshit me !");
		else if (*tmp != '^')
			ft_puterror("computor", "don't bullshit me !");
		tmp++;
		if (!(*tmp))
			ft_puterror("computor", "don't bullshit me !");
		else if (*tmp < '0' || *tmp > '9')
			ft_puterror("computor", "don't bullshit me !");
	}
}
*/

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
	if (i >= '0' && i <= '9')
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
	int				i;
	int				shit;
	char				*tmp;

	i = -1;
	tmp = NULL;
	shit = FALSE;
	if (!ft_strchr(base, 'X'))
		ft_puterror("computor", "I have no X");
//	if (!ft_strchr(base, '^'))
//		ft_puterror("computor", "you have to type X^[power]");
	while (++i < 300)
	{
		if ((tmp = ft_strchr(base, i)))
			shit = (ft_isprint(i) && bullshit(i) == FALSE) ? TRUE : shit;
	}
	if (shit == TRUE)
		ft_puterror("computor", "don't bullshit me !");
}

int					main(int ac, char **av)
{
	if (ac != 2)
		ft_puterror("computor", "I only take one argument");
	if (!ft_strchr(av[1], '='))
		ft_puterror("computor", "I'm not an equation !");
	format(av[1]);
//	verifx(av[1]);
	computor(av[1]);
	return (42);
}
