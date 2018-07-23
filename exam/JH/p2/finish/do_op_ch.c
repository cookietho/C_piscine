Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$




#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar('0' + nb);
}

int   ft_atoi(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 - ('0' - str[i]);
		++i;
	}
	if (str[0] == '-')
		nb = -nb;
	return (nb);
}

int		main(int argc, char **argv)
{
	int	res;

	res = 0;
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (*argv[2] == '*')
		res = ft_atoi(argv[1]) * atoi(argv[3]);
	if (*argv[2] == '/')
		res = ft_atoi(argv[1]) / atoi(argv[3]);
	if (*argv[2] == '%')
		res = ft_atoi(argv[1]) % atoi(argv[3]);
	if (*argv[2] == '+')
		res = ft_atoi(argv[1]) + atoi(argv[3]);
	if (*argv[2] == '-')
		res = ft_atoi(argv[1]) - atoi(argv[3]);
	ft_putnbr(res);
	ft_putchar ('\n');
	return (0);
}
