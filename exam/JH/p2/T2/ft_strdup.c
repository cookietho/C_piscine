Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);





#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *a;
	int length;

	i = 0;
	length = ft_strlen(src);
	a = (char*)malloc(sizeof(char) * length);
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	return (a);
}
