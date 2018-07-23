Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);




int		ft_atoi(const char *str)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;
	while (*str && (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' ||str[i] == ' ' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (*str && str[i] >= '0' && str[i] <= '9')
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	return (j * k);
}
