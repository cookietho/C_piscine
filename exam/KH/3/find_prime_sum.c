/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_prime_sum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 19:01:15 by kakim             #+#    #+#             */
/*   Updated: 2018/01/30 19:25:57 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(const char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j + str[i] - '0';
		i++;
		j *= 10;
	}
	return(j / 10);
}

int		add_prime_sum(int nb)
{
	int i;
	int prime;
	
	i = 2;
	prime = 0;
	if (i <= nb && nb > 1)
	{	
		while (nb % i != 0)
			i++;
		if (nb % i == 0 && nb != i && nb > 1)
			return (add_prime_sum(nb -1));
		if (nb % i == 0 && nb == i && nb > 1)
			return (nb + add_prime_sum(nb - 1));
	}
	return (0);
}

int		main(int ac, char **av)
{
	if(ac == 2 && av[1][0] != '1')
		ft_putnbr(add_prime_sum(ft_atoi(av[1])));
	write(1, "0\n", 2);
	return (0);
}
