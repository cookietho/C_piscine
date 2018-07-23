/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 23:28:05 by kakim             #+#    #+#             */
/*   Updated: 2018/03/12 18:58:38 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*f_bits(int n, char *a)
{
	int i;
	int div;

	i = 0;
	div = 128;
	while (div >= 1)
	{
		if(n >= div)
		{
			a[i] = '1';
		}
		if(n < div)
		{
			a[i] = '0';
		}
		n = n % div;
		div = div / 2;
		i++;
	}
	return(a);
}

char	*swap_bits(int n)
{
	int i;
	char array[8];
	char *a;
	char *b = (char*)malloc(sizeof(char) * 8);

	a = array;
	f_bits(n,a);
	i = 0;
	while(i < 4)
	{
		b[4 + i] = a[i];
		i++;
	}
	while(i >= 4 && i < 8)
	{
		b[i - 4] = a[i];
		i++;
	}
	return (b);
}

int		main()
{
	int a;
	a = 132;
	printf("%s\n", swap_bits(a));
	return (0);
}
