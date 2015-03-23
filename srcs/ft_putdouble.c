/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 15:56:46 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:29:30 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void				ft_putdouble(double n)
{
	int				tmp;

	ft_putnbr((int)n);
	ft_putchar('.');
	tmp = n * 1000000;
	tmp *= (tmp < 0) ? -1 : 1;
	ft_putnbr(tmp % 1000000);
}
