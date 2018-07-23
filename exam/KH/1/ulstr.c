/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:11:57 by kakim             #+#    #+#             */
/*   Updated: 2018/01/23 18:22:52 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
		else
			i++;
	}
	ft_putstr(str);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ulstr(argv[1]);
		return (0);
	}
}
