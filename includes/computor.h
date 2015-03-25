/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegent <alegent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/20 10:24:35 by alegent           #+#    #+#             */
/*   Updated: 2015/03/25 15:07:28 by alegent          ###   ########.fr       */
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
	char				**e;
	int					deg;
	char				*reduc;
};

double					ft_pow(double n, double power);
double					ft_sqrt(double n);
double					ft_atoi_double(const char *s);
t_node					*new_node(void);
int						degres(char *base);
char					**ft_split(const char *s);
int						get_value(t_node *node);
void					ft_putdouble(double n);
void					print_second(t_node *node);
void					print_one(t_node *node);
int						computor(char *base);
void					print_degres(int degres_v);
void					everything(char *e1, char *e2);
int						solve_one(t_node *node);
int						solve_two(t_node *node);
char					*ft_dtoa(double n);
char					*create_new_base(t_node *node);
void					verif_split(t_node *node);

#endif
