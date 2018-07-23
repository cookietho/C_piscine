/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 03:55:48 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 04:18:34 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

void	ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			str[i] = str[i];
			i++;
		}	
	}
	ft_putchar(str);
}

int		main(int ac, char **av)
{
	if(ac == 2)
		ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
