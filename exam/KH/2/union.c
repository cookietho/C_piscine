/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 01:09:28 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 01:32:07 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	check_dual(char *str)
{
	int i;
	int j;
	
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < i)
		{
			if(str[i] == str[j])
				i++;
			j++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_union(char *s1, char *s2)
{
	int i, j, length;
	char *s3;

	length = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char*)malloc(sizeof(char) * length);
	if (s1[i] != '\0' && s2[i] != '\0')
	{
		i = 0;
		while(s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		j = 0;
		while(s2[j] != '\0')
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	check_dual(s3);
}

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
