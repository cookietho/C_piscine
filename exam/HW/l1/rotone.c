



#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char c)
{
	if(c >= 'a' && c <= 'y')
		ft_putchar(c + 1);
	else if(c == 'z')
		ft_putchar(c - 25);
	else if(c >= 'A' && c <= 'Y')
		ft_putchar(c + 1);
	else if(c == 'Z')
		ft_putchar(c - 25);
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
			rotone(argv[1][i]);
			i++;
		}

	}
	ft_putchar('\n');
	return (0);
}
