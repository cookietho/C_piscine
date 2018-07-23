/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 03:36:21 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 03:40:11 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ulstr(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(c + 32);
	else if (c >= 'a' && c <= 'z')
		ft_putchar(c - 32);
	else
		ft_putchar(c);
}

int 	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ft_ulstr(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
