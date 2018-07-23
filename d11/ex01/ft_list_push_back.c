/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:25:07 by minakim           #+#    #+#             */
/*   Updated: 2018/01/24 19:34:13 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *enode;

	enode = *begin_list;
	if (enode == '\0')
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (enode->next)
		enode = enode->next;
	enode->next = ft_create_elem(data);

