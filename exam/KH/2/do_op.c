/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 09:44:50 by kakim             #+#    #+#             */
/*   Updated: 2018/01/25 10:01:10 by kakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>


void	do_op(char *s1, char *op, char *s2)
{
	if(op[0] == '+')
		printf("%d\n",(atoi(s1) + atoi(s2)));
	if(op[0] == '*') 
		printf("%d\n",(atoi(s1) * atoi(s2)));
	if(op[0] == '-') 
		printf("%d\n",(atoi(s1) - atoi(s2)));
	if((op[0] == '/' || op[0] == '%') && s2[0] == '0')
		printf("error\n");
	if (op[0] == '/') 
		printf("%d\n",(atoi(s1) / atoi(s2)));
	if(op[0] == '%') 
		printf("%d\n",(atoi(s1) % atoi(s2)));
}
		
int		main(int argc, char *argv[])
{
	if(argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	else
		write(1, "\n", 1);
	return (0);
}
