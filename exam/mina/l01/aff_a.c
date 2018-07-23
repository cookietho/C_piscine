/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 00:36:14 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 00:48:43 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_aff_a(char *str)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			a = 1;
		i++;
	}
	if (a == 1)
		write(1, "a\n", 2);
	else
		write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_aff_a(av[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
