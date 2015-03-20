/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:04 by alegent           #+#    #+#             */
/*   Updated: 2015/03/20 13:23:27 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

int					main(int ac, char **av)
{
	char			*first;
	char			*second;

	if (ac != 2)
		ft_puterror("computor", "I only take one argument");
	first = analyze(av[1]);
	second = analyze(av[1]);
	printf("first = %s\n", first);
	printf("second = %s\n", second);
	printf("degres = %d\n", degres(first));
	return (42);
}
