/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 21:55:35 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 14:51:30 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int i;
	
	i = 0;
	while(src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *a;
	int length;

	i = 0;
	length = ft_strlen(src);
	a = (char*)malloc(sizeof(char) * length);
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	return (a);
}

int		main()
{	
	char *s1;
	s1 = "abcde";
	printf("%s\n", ft_strdup(s1));
	return (0);
}

