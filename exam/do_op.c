/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 20:27:16 by minakim           #+#    #+#             */
/*   Updated: 2018/03/12 18:37:25 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("\n");
	}
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d\n", atoi(av[1]) + atoi(av[3]));
		else if (av[2][0] == '-')
			printf("%d\n", atoi(av[1]) - atoi(av[3]));
		else if (av[2][0] == '*')
			printf("%d\n", atoi(av[1]) * atoi(av[3]));
		else if (av[2][0] == '/')
			printf("%d\n", atoi(av[1]) / atoi(av[3]));
		else if (av[2][0] == '%')
			printf("%d\n", atoi(av[1]) % atoi(av[3]));
	}
	return (0);
}
