/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 20:42:03 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 21:51:20 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_last(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
		i--;
	while ((str[i] >= 33 && str[i] <= 126) && (str[i - 1] != ' ' || str[i - 1] != '\t'))
		i--;
	i++;
	while (str[i] >= 33 && str[i] <= 126)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_last(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
