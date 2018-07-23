/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:05:44 by minakim           #+#    #+#             */
/*   Updated: 2018/01/18 18:19:37 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *rc;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = min;
	rc = (int*)malloc(sizeof(int) * (max - min));
	while (i < max)
	{
		rc[i - min] = i;
		i++;
	}
	*range = rc;
	return (max - min);
}
