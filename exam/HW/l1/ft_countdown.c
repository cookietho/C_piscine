

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char num;

	num = '9';
	while(num >= '0')
	{
		ft_putchar(num);
		num--;
	}
	ft_putchar('\n');
	return (0);
}
