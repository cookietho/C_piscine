/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 15:51:25 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 02:36:31 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	rev_print(char *str)
{
	int a;
	int i;
	int j;

	a = 0;
	i = 0;
	while (str[a] != '\0')
		a++;
	j = a - 1;
	while (j >= 0)
	{
		write(1, &str[j], 1);
		j--;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
