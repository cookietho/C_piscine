/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 04:33:56 by minakim           #+#    #+#             */
/*   Updated: 2018/03/12 18:21:21 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_union(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		else
			i++;
	}
	return (-1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (ft_union(av[1], av[1][i]) == i)
				if (ft_union(av[2], av[1][i]) != -1)
						write(1, &av[1][i], 1);
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
			if (ft_union(av[2], av[2][i]) == i)
				if (ft_union(av[1], av[2][i]) == -1)
					write(1, &av[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
