/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 05:13:29 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 05:42:37 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int i, nb, sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-nb);
	else
		return (nb);
}

int		main()
{
	printf("%d\n", ft_atoi("+141"));
	printf("%d\n", atoi("+141"));
	printf("%d\n", ft_atoi("-141"));
	printf("%d\n", atoi("-141"));
	return (0);
}
