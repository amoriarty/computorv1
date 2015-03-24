#include "computor.h"

char			*create_new_base(t_node *node)
{
	char		*res;

	res = NULL;
	res = ft_strjoin(ft_dtoa(node->a), " * X^2 ");
	res = (node->b >= 0) ? ft_strjoin(res, "+ ") : res;
	res = ft_strjoin(res, ft_dtoa(node->b));
	res = ft_strjoin(res, " * X ");
	res = (node->c >= 0) ? ft_strjoin(res, "+ ") : res;
	res = ft_strjoin(res, ft_dtoa(node->c));
	return (res);
}
