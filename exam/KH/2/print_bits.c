/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:43:15 by kakim             #+#    #+#             */
/*   Updated: 2018/03/12 19:00:32 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int div;
	int i;

	div = 128;
	while (div >= 1)
	{
		if(octet >= div)
		{
			write(1, "1", 1);
		}
		if(octet < div)
		{	
			write(1, "0", 1);
		}
		octet = octet % div;
		div = div / 2;
	}
}

int		main()
{
	int a;

	a = 132;
	print_bits(a);
	return (0);
}
