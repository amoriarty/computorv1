#include "computor.h"

double			ft_sqrt(double n)
{
	double 		res;

	while (res * res < n)
		res += 0.000001;
	return (res);
}
