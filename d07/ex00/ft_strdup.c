/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 13:20:52 by minakim           #+#    #+#             */
/*   Updated: 2018/01/19 11:48:56 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char		*rc;
	int			l;
	int			i;

	l = ft_strlen(src);
	rc = (char*)malloc(sizeof(*src) * l);
	i = 0;
	if (rc == 0)
		return (rc);
	while (i < l - 1)
	{
		rc[i] = src[i];
		i++;
	}
	return (rc);
}

int		main(void)
{
	char *rc1 = "hello";
	char *rc2;
	rc2 = ft_strdup(rc1);

	printf("%s\n", rc2);
	return (0);
}
