#include "computor.h"

int			ft_sqrt(int n, int power)
{
	int		res;

	res = n;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= n;
		power--;
	}
	return (res);
}
