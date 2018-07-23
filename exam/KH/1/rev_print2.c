/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 02:36:36 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 02:43:47 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
