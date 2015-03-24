#include "computor.h"

void			everything(char *e1, char *e2)
{
	if (!ft_strcmp(ft_strtrim(e1), ft_strtrim(e2)))
		ft_puterror("computor", "Every solution is possible");
}
