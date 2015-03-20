/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 12:38:39 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 13:06:29 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int			condition(char c)
{
	if (c == 'X')
		return (TRUE);
	if (c == '=')
		return (TRUE);
	if (c == '.')
		return (TRUE);
	if (c >= '0' && c <= '9')
		return (TRUE);
	if (c == '*')
		return (TRUE);
	if (c == '^')
		return (TRUE);
	if (c == ' ')
		return (TRUE);
	if (c == '+')
		return (TRUE);
	if (c == '-')
		return (TRUE);
	return (FALSE);
}

char				*analyze(char *base)
{
	int				i;

	i = 0;
	while (base[i] && base[i] != '=')
	{
		if (condition(base[i]) == FALSE)
			ft_puterror("computor", "I'm sorry, I can't understand you");
		i++;
	}
	return (ft_strsub(base, 0, i));
}
