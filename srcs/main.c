/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 11:05:47 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

int					main(int ac, char **av)
{
	char			**equation;

	if (ac != 2)
		ft_puterror("computor", "I only take one argument");
	equation = ft_strsplit(av[1], '=');
	printf("%s\n%s\n", equation[0], equation[1]);
	printf("%f\n", ft_atoi_double(" 1 * X^0"));
	return (42);
}
