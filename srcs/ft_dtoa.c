#include "computor.h"

char			*ft_dtoa(double n)
{
	int		tmp;
	char		*res;

	res = NULL;
	if (n < 0)
	{
		n *= -1;
		res = ft_strdup("-");
	}
	tmp = (int)n;
	res = ft_strjoin(res, ft_itoa(tmp));
	res = ft_strjoin(res, ".");
	n -= (double)tmp;
	n *= 1000000;
	res = ft_strjoin(res, ft_itoa((int)n));
	return (res);
}
