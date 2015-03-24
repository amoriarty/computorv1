/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   degres.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 13:16:16 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 13:23:46 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

int					degres(char *base)
{
	int				i;
	int				res;

	i = -1;
	res = 0;
	while (base[++i])
	{
		if (base[i] == '^' && base[i + 1] == '1')
			res = 1;
		if (base[i] == '^' && base[i + 1] == '2')
			res = 2;
		if (base[i] == '^' && base[i + 1] > '2')
			res = 3;
	}
	if (res > 2)
		ft_puterror("computor", "The polynomial degres is to high for me");
	else if (res == -1)
		ft_puterror("computor", "don't bullshit me");
	return (res);
}
