/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 02:16:08 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 03:00:29 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i] != '\0')
	{	
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			count  = str[i] - 97;
			while(count >= 0)
			{
				write(1, &str[i], 1);
				count--;
			}
			i++;	
		}
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			count  = str[i] - 97;
			while(count >= 0)
			{	
				write(1, &str[i], 1);
				count--;
			}
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	if(argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
