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

	i = -1;
	while (base[++i])
	{
		if (base[i] == '^' && base[i + 1] == '2')
			return (2);
		if (base[i] == '^' && base[i + 1] > '2')
			ft_puterror("computor", "The polynomial degres is to high for me");
	}
	return (1);
}
