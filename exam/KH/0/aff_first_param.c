/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 20:12:52 by kakim             #+#    #+#             */
/*   Updated: 2018/01/18 20:12:54 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putlen(char *str)
{
	int b;

	b = 0;
	while (str[b] != '\0')
		b++;
	return (b);
}

int		main(int ac, char *av[])
{
	if (ac > 1)
	{
		write(1, av[1], ft_putlen(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
