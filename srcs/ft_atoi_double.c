#include "computor.h"

#include <stdio.h>

double			ft_atoi_double(const char *s)
{
	int		i;
	int		x;
	double		sign;
	double		res;

	i = 0;
	x = 0;
	res = 0;
	sign = (s[i] == '-') ? -1 : 1;
	i = (s[i] == '-' || s[i] == '+') ? 1 : 0;
	while (s[i] && s[i] != '.' && s[i] >= '0' && s[i] <= '9')
		res = res * 10 + (s[i++] - '0');
	i += (s[i] == '.') ? 1 : 0;
	while (s[i + x] && (s[i + x] >= '0' && s[i + x] <= '9'))
		res = res * 10 + (s[i + x++] - '0');
	while (x-- > 0)
		res /= 10;
	return (res * sign);
}
