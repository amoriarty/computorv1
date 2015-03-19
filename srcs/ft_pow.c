#include "computor.h"

double			ft_pow(double n, double power)
{
	double		res;

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
