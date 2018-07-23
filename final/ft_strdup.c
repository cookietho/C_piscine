/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 06:16:04 by minakim           #+#    #+#             */
/*   Updated: 2018/02/02 06:20:25 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int i, l;
	char *a;

	i = 0;
	l = ft_strlen(src);
	a = (char*)malloc(sizeof(char) * l);
	while (str[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	return (a);
}
