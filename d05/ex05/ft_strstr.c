/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:36:04 by minakim           #+#    #+#             */
/*   Updated: 2018/01/16 16:59:58 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*string;
	int		count;

	string = to_find;
	count = -1;
	while (*str)
	{
		if (string[0] == '\0')
			return (str);
		if (*str != *to_find)
			to_find = string;
		if (*str == *to_find)
		{
			to_find++;
			count++;
			if (*to_find == '\0')
				return (str - count);
		}
		str++;
		if (*str == '\0')
			return (0);
	}
	return (0);
}
