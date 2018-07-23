Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);




int	ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		sign;

	sign = 0;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\v'
		||str[i] == ' ' || str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] && str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}
