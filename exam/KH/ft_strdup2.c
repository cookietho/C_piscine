/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:51:39 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 15:03:54 by kakim            ###   ########.fr       */
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
	return (i);
}

char	*ft_strdup(char *str)
{
	char *ns;
	int i, length;
	
	i = 0;
	length = ft_strlen(str);
	ns = (char *)malloc(sizeof(char) * length);
	while (str[i] != '\0')
	{
		ns[i] = str[i];
		i++;
	}
	return (ns);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n",ft_strdup(av[1]));
	return (0);
}
