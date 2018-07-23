/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:42:30 by minakim           #+#    #+#             */
/*   Updated: 2018/01/13 22:07:45 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int sum;

	sum = 1;
	i = nb;
	if (i == 0)
		return (1);
	while (i > 0 && i < 13)
	{
		sum = sum * i;
		i--;
		if (i == 0)
			return (sum);
	}
	return (0);
}
