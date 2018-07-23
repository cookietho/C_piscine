/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 02:48:50 by kakim             #+#    #+#             */
/*   Updated: 2018/01/26 02:59:42 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*search_and_replace(char *str, char *s, char *r)
{
	int i;

	i = 0;
	if ((s[1] & r[1]) != '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == s[0])
			str[i] = r[0];
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_putstr(search_and_replace(av[1], av[2], av[3]));
	write(1, "\n", 1);
	return (0);
}
