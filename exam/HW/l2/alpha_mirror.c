
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	is_alpha(char c)
{
	if('a' <= c && c <= 'z')
		return (1);
	if('A' <= c && c <= 'Z')
		return (2);
	return (0);
}

void	alpha_mirror(char c)
{
	if(is_alpha(c) == 1)
		ft_putchar(96 + 26 - c + 97);
	else if(is_alpha(c) == 2)
		ft_putchar(64 + 26 - c + 65);
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
			alpha_mirror(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
