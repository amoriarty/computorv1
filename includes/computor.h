/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:35 by alegent           #+#    #+#             */
/*   Updated: 2015/03/28 17:17:37 by alegent          ###   ########.fr       */
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
# define SUCCESS 1
# define FAILURE 0

typedef struct s_node	t_node;
struct					s_node
{
	double				a;
	double				b;
	double				c;
	char				**d;
	int					deg;
};

double					ft_pow(double n, double power);
double					ft_sqrt(double n);
double					ft_atoi_double(const char *s);
t_node					*new_node(void);
char					**ft_split(const char *s);
int						get_value(t_node *node);
void					ft_putdouble(double n);
void					print_second(t_node *node);
void					print_one(t_node *node);
int						computor(char *base);
void					print_degres(int degres_v);
int						solve_one(t_node *node);
int						solve_two(t_node *node);
char					*ft_dtoa(double n);
void					everything(t_node *e1, t_node *e2);
int						get_degres(t_node *node);
void					reduc(t_node *e1, t_node *e2);
void					verif_x(char *base);
void					verif_split(t_node *node);
int						solver(t_node *e1);

#endif
