/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 03:14:21 by kakim             #+#    #+#             */
/*   Updated: 2018/01/24 03:20:42 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		find_last(char *str)
{
	int i;
	int j;
	
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\t')
		{
			if(str[i + 1] >= 33 && str[i + 1] <= 122)
				j = i;
		}
		i++;
	}
	return (j);
}

void	last_word(char *str)
{
	int a;

	a = find_last(str) + 1;
	while (str[a] != '\0' && str[a] != ' ' && str[a] != '\t')
	{
		write(1, &str[a], 1);
		a++;
	}
}

int		main(int a, char *b[])
{
	if (a == 2)
	{
		last_word(b[1]);
	}
	write (1, "\n", 1);
	return (0);
}
