/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seach_and_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:44:19 by kakim             #+#    #+#             */
/*   Updated: 2018/01/23 18:51:16 by kakim            ###   ########.fr       */
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

void	search_and_replace(char *str, char *s, char *r)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *s)
			str[i] = *r;
		i++;
	}
	ft_putstr(str);
}

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
	return (0);
}

/* 이건 틀림. 2가 맞음. 2, 3번째 argument 1글자 아닐때 값이 출력되면 안됨! */