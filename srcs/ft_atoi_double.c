/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:23:40 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 11:06:33 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double			ft_atoi_double(const char *s)
{
	int			i;
	int			x;
	double		sign;
	double		res;

	i = 0;
	x = 0;
	res = 0;
	while (s[i] == ' ')
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	i += (s[i] == '-' || s[i] == '+') ? 1 : 0;
	while (s[i] && s[i] == ' ')
		i++;
	while (s[i] && s[i] != '.' && s[i] >= '0' && s[i] <= '9')
		res = res * 10 + (s[i++] - '0');
	i += (s[i] == '.') ? 1 : 0;
	while (s[i + x] && (s[i + x] >= '0' && s[i + x] <= '9'))
		res = res * 10 + (s[i + x++] - '0');
	while (x-- > 0)
		res /= 10;
	return (res * sign);
}
