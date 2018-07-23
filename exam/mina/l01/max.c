/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 21:52:48 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 00:31:56 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsgined int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		if (tab[i + 1] < tab[i])
			return (tab[i]);
		i++;
	}
	return (0);
}