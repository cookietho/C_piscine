

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char c)
{

	if(c >= 'a' && c <= 'm')
		ft_putchar(c + 13);
	else if(c >= 'n' && c <= 'z')
		ft_putchar(c - 13);
	else if(c >= 'A' && c <= 'M')
		ft_putchar(c + 13);
	else if(c >= 'N' && c <= 'Z')
		ft_putchar(c - 13);
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
			ft_rot_13(argv[1][i]);
			i++;
		}

	}
	ft_putchar('\n');
	return (0);
}
