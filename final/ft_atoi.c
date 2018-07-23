/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 05:27:48 by minakim           #+#    #+#             */
/*   Updated: 2018/02/02 05:35:44 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int nb;
	int i;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] && (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v' || str[i] == ' '))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i]  && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int		main()
{
	printf("%d\n", ft_atoi("-141"));
	printf("%d\n", atoi("-141"));
	return (0);
}

