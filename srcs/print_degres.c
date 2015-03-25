/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_degres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:20:21 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:20:25 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			print_degres(int degres_v)
{
	ft_putstr("Polynomial degree: ");
	ft_putnbr(degres_v);
	ft_putchar(EOL);
}
