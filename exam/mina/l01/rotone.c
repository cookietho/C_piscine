/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 03:14:15 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 03:17:06 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char c)
{
	if (c >= 'A' && c <= 'Y')
		ft_putchar(c + 1);
	else if (c >= 'a' && c <= 'y')
		ft_putchar(c + 1);
	else if (c == 'z' || c == 'Z')
		ft_putchar(c -25);
	else
		ft_putchar(c);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			ft_rotone(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
