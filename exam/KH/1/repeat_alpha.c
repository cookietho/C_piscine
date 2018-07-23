/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 00:07:00 by kakim             #+#    #+#             */
/*   Updated: 2018/01/19 00:31:26 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	repeat_alpha(char *str)
{
	int i;
	int rp;

	i = 0;
	rp = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			rp = str[i] - 65; 
			while (rp >= 0)
			{
				write(1, &str[i], 1);
				rp--;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			rp = str[i] - 97;
			while (rp >= 0)
			{
				write(1, &str[i], 1);
				rp--;
			}
		}
		else 
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (0);
}

int		main(int a, char *b[])
{
	if (a == 2)
	{
		repeat_alpha(b[1]);
	}
	write(1, "\n", 1);
	return (0);
}
