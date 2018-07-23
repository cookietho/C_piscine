/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:05:38 by kakim             #+#    #+#             */
/*   Updated: 2018/01/18 22:14:08 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (0);
}
int		main()
{
	char FT_LINE[];

	FT_LINE = "Les stragiaires du staff ne sentent pas toujours tres bon."
	strlen(FT_LINE);	
	return (0);
}
