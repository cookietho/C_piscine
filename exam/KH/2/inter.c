/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 22:25:03 by kakim             #+#    #+#             */
/*   Updated: 2018/01/24 23:26:31 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while(j < i)
		{
			if(s1[i] == s1[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		k = 0;
		while (s1[i] != s2[k] && s2[k] != '\0')
			k++;
		if(s2[k] == '\0')
			i++;
		if(s2[k] != '\0')
		{
			write(1, &s2[k], 1);
			i++;
		}
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
