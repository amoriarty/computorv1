/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:35 by alegent           #+#    #+#             */
/*   Updated: 2015/03/23 16:56:53 by alegent          ###   ########.fr       */
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
	double				a;
	double				b;
	double				c;
};

double					ft_pow(double n, double power);
double					ft_sqrt(double n);
double					ft_atoi_double(const char *s);
t_node					*new_node(void);
int						degres(char *base);
char					**ft_split(const char *s);
t_node					*get_value(char *base, char **split);
void					ft_putdouble(double n);
void					print_second(t_node *node);
void					print_one(t_node *node);

#endif
