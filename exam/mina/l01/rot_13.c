/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 02:26:14 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 03:13:45 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char c)
{
	if (c >= 'A' && c <= 'M')
		ft_putchar(c + 13);
	else if (c >= 'a' && c <= 'm')
		ft_putchar(c + 13);
	else if (c >= 'N' && c <= 'Z')
		ft_putchar(c - 13);
	else if (c >= 'n' && c <= 'z')
		ft_putchar(c - 13);
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
			ft_rot_13(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
