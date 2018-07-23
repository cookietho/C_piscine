/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstr_world.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 23:35:50 by kakim             #+#    #+#             */
/*   Updated: 2018/01/18 23:35:54 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' && str[i] == '\t')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int		main(int a, char *b[])
{
	if (a == 2)
	{
		first_word(b[1]);
	}
	write (1, "\n", 1);
	return (0);
}
