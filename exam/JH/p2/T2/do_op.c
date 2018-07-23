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




#ifndef DO_OP_H
# define DO_OP_H

# include <stdio.h>

int		ft_atoi(char *str);
int		main(int ac, char **av);

#endif



---------------------------------------------------------------



#include "do_op.h"

int		ft_atoi(char *str)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;
	while (*str && (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' ||str[i] == ' ' || str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (*str && str[i] >= '0' && str[i] <= '9')
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	return (j * k);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d\n", ft_atoi(av[1]) + ft_atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%d\n", ft_atoi(av[1]) - ft_atoi(av[3]));
		else if (av[2][0] == '*')
			printf("%d\n", ft_atoi(av[1]) * ft_atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%d\n", ft_atoi(av[1]) / ft_atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%d\n", ft_atoi(av[1]) % ft_atoi(av[3]));
	}
	else
		printf("\n");
	return (0);
}
