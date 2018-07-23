/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 01:49:41 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 01:52:59 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
