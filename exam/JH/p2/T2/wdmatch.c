Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch #include <unistd.h>

void	ft_putstr(char *str)
{
	int i; 
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != s1[i] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			break ;
		i++;
	}
	if (s1[i] == '\0')
		ft_putstr(&s1[i]);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}| cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$




#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		wdmatch(char *dst, char *src)
{
	int i;
	int j;
	int nb;

	nb = 0;
	i = 0;
	j = 0;
	while (dst[nb])
		nb++;
	while (src[i])
	{
		if (src[i] == dst[j])
			j++;
		i++;
	}
	if (j == nb)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		if (wdmatch(av[1], av[2]) == 1)
		{
			ft_putstr(av[1]);
			ft_putchar('\n');
		}
		if (wdmatch(av[1], av[2]) == 0)
			ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
