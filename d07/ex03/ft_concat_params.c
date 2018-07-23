/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:08:40 by minakim           #+#    #+#             */
/*   Updated: 2018/01/18 18:20:22 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*rc;
	int		i;
	int		l;
	int		k;
	int		j;

	i = -1;
	l = 0;
	k = 0;
	while (++i < argc)
		l += ft_strlen(argv[i]) + 1;
	rc = (char*)malloc(sizeof(char) * l);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (++j < ft_strlen(argv[i]))
			rc[j + k] = argv[i][j];
		rc[j + k] = '\n';
		k += j + 1;
	}
	rc[k - 1] = '\0';
	return (rc);
}
