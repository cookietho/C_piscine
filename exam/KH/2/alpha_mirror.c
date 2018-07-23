/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 02:05:43 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 02:22:00 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*alpha_mirror(char *str)
{
	int i, length;
	char *a;
	
	length = ft_strlen(str);
	a = (char*)malloc(sizeof(char) * length);
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			a[i] = 219 - str[i];
		if(str[i] >= 'A' && str[i] <= 'Z')
			a[i] = 155 - str[i];
		else if(str[i] < 65 || (str[i] >= 91 && str[i] <= 96) || str[i] >= 123)
			a[i] = str[i];
		write(1, &a[i], 1);
		i++;
	}
	return (a);
}

int		main(int argc, char *argv[])
{
	if(argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
