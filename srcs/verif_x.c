/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/28 17:18:21 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:18:22 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			verif_x(char *base)
{
	char		*tmp;

	tmp = base - 1;
	while ((tmp = ft_strchr(tmp + 1, 'X')))
	{
		if (*(tmp + 1) && *(tmp + 1) != '^')
			ft_puterror("computor", "usage: X^n");
		else if (*(tmp + 2) && ft_isdigit(*(tmp + 2)) == FALSE)
			ft_puterror("computor", "usage: X^n");
		else if (*(tmp + 3) && *(tmp + 3) != ' ')
			ft_puterror("computor", "usage: X^n");
		else if (*(tmp + 2) && *(tmp + 2) > '2')
			ft_puterror("computor", "Polynomial degres too high !");
	}
}
