/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 02:11:27 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 10:25:52 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j = j + str[i] - '0';
		i++;
	}
	return(j * k);
}

int		main()
{
	printf("%d\n", ft_atoi("+141"));
	printf("%d\n", atoi("+141"));
	return (0);
}
