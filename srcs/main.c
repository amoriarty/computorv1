/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:22:43 by alegent          ###   ########.fr       */
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
	int					i;
	int					shit;
	char				*tmp;

	i = -1;
	tmp = NULL;
	shit = FALSE;
	if (!ft_strchr(base, 'X'))
		ft_puterror("computor", "I have no X");
	while (++i < 300)
	{
		if ((tmp = ft_strchr(base, i)))
			shit = (ft_isprint(i) && bullshit(i) == FALSE) ? TRUE : shit;
	}
	if (shit == TRUE)
		ft_puterror("computor", "don't bullshit me !");
}

int						main(int ac, char **av)
{
	if (ac != 2)
		ft_puterror("computor", "I only take one argument");
	if (!ft_strchr(av[1], '='))
		ft_puterror("computor", "I'm not an equation !");
	format(av[1]);
	computor(av[1]);
	return (42);
}
