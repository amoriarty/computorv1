/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:57:05 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

int					main(int ac, char **av)
{
	if (ac != 2)
		ft_puterror("computor", "I only take one argument");
	computor(av[1]);
	return (42);
}
