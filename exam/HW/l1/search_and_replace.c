


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_search_and_replace(char s1, char *s2, char *s3)
{
	if(ft_strlen(s2) == 1 || ft_strlen(s3) == 1)
	{
		if(s1 == *s2)
			ft_putchar(*s3);
		else
			ft_putchar(s1);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 4)
	{
		while(argv[1][i])
		{
			ft_search_and_replace(argv[1][i], argv[2], argv[3]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
