/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 07:55:54 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 08:02:40 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0')
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		if(s1[i] == s2[i])
			i++;
	}
	return(0);
}

int		main(int argc, char *argv[])
{
	if(argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return(0);
}
