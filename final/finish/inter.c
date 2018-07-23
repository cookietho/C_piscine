/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 05:16:57 by minakim           #+#    #+#             */
/*   Updated: 2018/02/02 05:20:44 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_inter(char *str, char c)
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

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (ft_inter(av[1], av[1][i]) == i)
				if (ft_inter(av[2], av[1][i]) != -1)
					write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
