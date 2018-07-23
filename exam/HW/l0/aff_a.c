#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == 'a')
			return ft_putchar('a');
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_aff_a(argv[1]);
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
