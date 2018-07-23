/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 00:50:33 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 01:30:48 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		write(1, av[ac - 1], ft_strlen(av[ac - 1]));
	}
	write(1, "\n", 1);
	return (0);
}
