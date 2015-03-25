/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:19:21 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 15:16:14 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

char			*ft_dtoa(double n)
{
	int			tmp;
	char		*res;

	res = NULL;
	if (n < 0)
	{
		n *= -1;
		res = ft_strdup("-");
	}
	tmp = (int)n;
	res = ft_strjoin(res, ft_itoa(tmp));
	res = ft_strjoin(res, ".");
	n -= (double)tmp;
	n *= 1000000;
	res = ft_strjoin(res, ft_itoa((int)n));
	return (res);
}
