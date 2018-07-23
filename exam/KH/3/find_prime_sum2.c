/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_prime_sum2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 22:59:55 by kakim             #+#    #+#             */
/*   Updated: 2018/01/30 23:20:23 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int c)
{
	if (c < 0)
		ft_putnbr(c * -1);
	if (c >= 0 && c <= 9)
		ft_putchar(c + '0');
	else
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
}

int		ft_atoi(char *str)
{
	int nb, i;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb *= 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return (nb);
}

int		find_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if(nb == i)
				return (1);
			if(nb != i)
				return (0);
		}
		i++;
	}
	return (0);
}

int		sum_prime(int nb)
{
	int sum, i;

	sum = 0;
	i = 2;
	while (i <= nb)
	{
		if(find_prime(i) == 1)
		{
			sum += i;
		}
		i++;
	}
	return (sum);
}

int		main(int ac, char **av)
{
	if(ac == 2 && av[1][0] != '1')
		ft_putnbr(sum_prime(ft_atoi(av[1])));
	else 
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
