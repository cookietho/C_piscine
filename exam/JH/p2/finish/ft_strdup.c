Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);





#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*rc;
	int		l;
	int		i;

	l = ft_strlen(src);
	rc = (char*)malloc(sizeof(*src) * l);
	i = 0;
	if (rc == 0)
		return (rc);
	while (i < l - 1)
	{
		rc[i] = src[i];
		i++;
	}
	return (rc);
}
