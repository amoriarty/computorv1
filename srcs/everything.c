/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   everything.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 08:19:13 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 08:19:14 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			everything(char *e1, char *e2)
{
	if (!ft_strcmp(ft_strtrim(e1), ft_strtrim(e2)))
		ft_puterror("computor", "Every solution is possible");
}
