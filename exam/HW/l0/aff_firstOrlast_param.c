#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_param(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc >= 2)
		ft_first_param(argv[1]);
		// ft_last_param(argv[argc - 1]);
	else
		ft_putchar('\n');
	return (0);
}
