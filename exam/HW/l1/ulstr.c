


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(c + 32);
	else if (c >= 'a' && c <= 'z')
		ft_putchar(c - 32);
	else
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			ft_ulstr(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
