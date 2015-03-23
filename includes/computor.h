/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:35 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 11:04:09 by alegent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H
# include "libft.h"
# define TRUE 1
# define FALSE 0
# define POSITIVE 1
# define NEGATIVE -1
# define ERROR -1

typedef struct s_node	t_node;
struct					s_node
{
	char				*a;
	char				*b;
	char				*c;
	int					sign;
};

double					ft_pow(double n, double power);
double					ft_sqrt(double n);
double					ft_atoi_double(const char *s);
t_node					*new_node(void);
int						degres(char *base);

#endif
