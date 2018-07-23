/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 02:00:16 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 02:12:59 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_repeat(char c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
	   r = c - 64;
	else if (c >= 'a' && c <= 'z')
		r = c - 96;
	else
		r = 1;
	return (r);
}

int	main(int ac, char **av)
{
	int i;
	int r;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			r = ft_repeat(av[1][i]);
			while (r--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
