


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



void	ft_repeat_alpha(char c)
{
	int i;

	i = 0;
	if('a' <= c && c <= 'z')
	{
		while(i < c - 96)
		{
			ft_putchar(c);
			i++;
		}
	}
	else if ('a' <= c && c <= 'z')
	{
		while(i < c - 64)
		{
			ft_putchar(c);
			i++;
		}
	}
	else
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
		while(argv[1][i])
		{
			ft_repeat_alpha(argv[1][i]);
			i++;
		}
	ft_putchar('\n');
	return (0);
}
