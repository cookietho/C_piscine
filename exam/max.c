/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 20:01:22 by minakim           #+#    #+#             */
/*   Updated: 2018/02/01 20:20:06 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
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
