/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 01:06:47 by kakim             #+#    #+#             */
/*   Updated: 2018/01/31 01:57:16 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	epur_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		{
			i++;
		}	
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{	
			write(1, &str[i], 1);
			i++;
		}
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			i++;
			if(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
				write(1, " ", 1);
				write(1, &str[i], 1);
				i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
