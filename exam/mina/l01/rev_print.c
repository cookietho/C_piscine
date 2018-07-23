/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 02:15:45 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 02:17:56 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int l;

	if (ac == 2)
	{
		l = ft_strlen(av[1]);
		while (l--)
			write(1, &av[1][l], 1);
	}
	write(1, "\n", 1);
	return (0);
}
