/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 08:09:13 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 08:15:07 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char *a;

	i = 0;
	len = ft_strlen(str);
	a = (char*)malloc(sizeof(char) * len);
	while (i <= len)
	{
		a[i] = str[len - 1 - i];
		i++;
	}
	return (a);
}

int		main(int argc, char *argv[])
{
	printf("%s\n",ft_strrev(argv[1]));
	return (0);
}
