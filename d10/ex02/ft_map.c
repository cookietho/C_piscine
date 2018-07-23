/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 21:04:15 by minakim           #+#    #+#             */
/*   Updated: 2018/01/23 17:16:25 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *rc;

	i = 0;
	rc = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		rc[i] = f(tab[i]);
		i++;
	}
	return (rc);
}
