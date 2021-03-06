/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 03:28:04 by minakim           #+#    #+#             */
/*   Updated: 2018/02/02 03:32:59 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_wdmatch(char *str, char *str2)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str2[j] && str2[j] != str[i])
			j++;
		if (str2[j] != str[i])
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
		while (av[1][i] != '\0')
		{
			if (ft_wdmatch(av[1], av[2]))
				write(1, &av[1][i], 1);
			i++;
		}
	write (1, "\n", 1);
	return (0);
}
