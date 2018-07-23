/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 06:55:27 by kakim             #+#    #+#             */
/*   Updated: 2018/03/12 19:31:48 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*bits(int nb, char *a)
{
	int div;
	int i;

	i = 0;
	div = 128;
	while (div >= 1)
	{
		if(nb >= div)
		{
			a[i] = '1';
		}
		if(nb < div)
		{	
			a[i] = '0';
		}
		i++;
		nb = nb % div;
		div = div / 2;
	}
	return (a);
}

char	*reverse_bits(int nb)
{
	int i;
	char array[8];
	char *b = (char*)malloc(sizeof(char) * 8);
	char *a;

	a = array;
	bits(nb, a);

	i = 0;
	while (array[7 - i] != '\0')
	{	
		b[i] = a[7 - i];
		i++;		
	}
	return (b);
}

int		main()
{
	int a;
	a = 111;
	printf("%s\n",reverse_bits(a));
	return (0);
}

