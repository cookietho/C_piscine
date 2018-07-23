Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);




char	*ft_strrev(char *str)
{
	char	t;
	int		n;
	int		i;

	n = 0;
	i = 0;
	while (str[n])
		n++;
	n--;
	while (i < n)
	{
		t = str[n];
		str[n] = str[i];
		str[i] = t;
		i++;
		n--;
	}
	return (str);
}
