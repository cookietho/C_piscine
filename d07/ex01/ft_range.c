/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:00:54 by minakim           #+#    #+#             */
/*   Updated: 2018/01/18 18:17:42 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *rc;
	int i;

	if (min >= max)
		return (0);
	rc = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	while (i < max)
	{
		rc[i - min] = i;
		i++;
	}
	return (rc);
}
