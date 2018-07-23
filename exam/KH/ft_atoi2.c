/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:26:01 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 10:40:48 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(str[i] != '\0')
	{
		nb = nb + (str[i] - '0');
		nb = nb * 10;
		i++;
	}
	return (nb / 10);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n",ft_atoi(av[1]));
	return (0);
}


#include "libft.h"

/*
** Discards any whitespace characters until first non-whitespace character is
** found. Then takes as many characters as possible to form a valid integer
** number representation and converts them to integer value.
*/

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (str[0] >= 48 && str[0] <= 57)
	{
		value = value * 10 + (str[0] - '0');
		str++;
	}
	return (value * sign);
}


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

int	recursive_atoi(char *str, int ans, int index)
{
	if (index == ft_strlen(str))
		return (ans);
	if (str[index] && str[index] > 47 && str[index] < 58)
	{
		ans = ans * 10 + (str[index] - 48) * 1;
		return (recursive_atoi(str, ans, index + 1));
	}
	else if (str[index] == ' ')
		return (recursive_atoi(str, ans, index + 1));
	else
		return (ans);
}

int	ft_atoi(char *str)
{
	int fin_ans;
	int index;

	index = 0;
	fin_ans = 0;
	while (str[index] <= 32)
	{
		index++;
	}
	if (str[index] == '-')
		fin_ans = -1 * recursive_atoi(str, 0, index + 1);
	else if (str[index] <= 47 || str[index] >= 58)
		fin_ans = recursive_atoi(str, 0, index + 1);
	else
		fin_ans = recursive_atoi(str, 0, index);
	return (fin_ans);
}