/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:22:23 by minakim           #+#    #+#             */
/*   Updated: 2018/01/15 21:25:50 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 1;
	if (str[0] == '-')
	{
		c = -1;
		a = 1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
			b = b * 10 + str[a] - '0';
			if (str[a + 1] <= 47 || str[a + 1] >= 58)
				return (b * c);
			if (b == 0)
				return (0);
		}
		a++;
	}
	return (b * c);
}
