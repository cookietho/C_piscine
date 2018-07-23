/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 02:56:47 by minakim           #+#    #+#             */
/*   Updated: 2018/01/31 03:05:59 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		ft_putchar(155 - c);
	else if (c >= 'a' && c <= 'z')
		ft_putchar(219 -c);
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
			ft_alpha(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
