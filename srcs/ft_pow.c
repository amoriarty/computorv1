/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:23:48 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 10:23:50 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double			ft_pow(double n, double power)
{
	double		res;

	res = n;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= n;
		power--;
	}
	return (res);
}
