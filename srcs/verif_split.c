#include "computor.h"

static void		alone(t_node *node, int i)
{
		if (!ft_strcmp(ft_strtrim(node->d[i]), "X"))
			node->b += 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "- X"))
			node->b -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "-X"))
			node->b -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "X^0"))
			node->c += 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^0"))
			node->c -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^0"))
			node->c -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "X^1"))
			node->b += 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^1"))
			node->b -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^1"))
			node->b -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "X^2"))
			node->a += 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "- X^2"))
			node->a -= 1;
		if (!ft_strcmp(ft_strtrim(node->d[i]), "-X^2"))
			node->a -= 1;
}

void			verif_split(t_node *node)
{
	int		i;
	char		*tmp;

	i = -1;
	while (node->d[++i])
		alone(node, i);
	i = -1;
	while (node->d[++i])
	{
		if ((tmp = ft_strchr(node->d[i], '^')))
		{
			if (*(tmp - 1) && *(tmp - 1) != 'X')
				ft_puterror("computor", "don't bullshit me !");
			if (*(tmp + 1)
				&& !(*(tmp + 1) >= '0' && *(tmp + 1) <= '9'))
				ft_puterror("computor", "don't bullshit me !");
		}
		if ((tmp = ft_strchr(node->d[i], 'X')))
		{
			if (!(*(tmp + 1)))
				node->d[i] = ft_strjoin(node->d[i], "^1");
		}
	}
}
