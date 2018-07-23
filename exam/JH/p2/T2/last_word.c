Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>




#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while ((str[i] == ' ' || str[i] == '\t') && i >= 0)
		i--;
	while ((str[i] >= 33 && str[i] <= 126) && (str[i - 1] != ' ' || str[i - 1] != '\t'))
		i--;
	i++;
	while (str[i] >= 33 && str[i] <= 126)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
