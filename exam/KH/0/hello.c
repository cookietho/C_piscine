/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 00:04:34 by kakim             #+#    #+#             */
/*   Updated: 2018/01/19 00:06:00 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		main(void)
{
	write(1, "hello World!\n", 13);
	return (0);
}