/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 07:12:37 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 07:24:51 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*wdmatch(char *s1, char *s2)
{
	int i, j, count, length;

	i = 0;
	count = 0;
	length = ft_strlen(s1);
	while(s1[i] != '\0')
	{
		j = 0;
		while(s1[i] != s2[j] && s2[j] != '\0')
			j++;	
		if(s1[i] != s2[j] && s2[j] == '\0')
			return (0);
		if(s1[i] == s2[j])
			count++;
		i++;
	}
	if (count == length)
		i = 0;
		while (s1[i] != '\0')
		{
			write(1, &s1[i], 1);
			i++;
		}
	return(0);
}


int		main(int argc, char *argv[])
{
	if(argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
