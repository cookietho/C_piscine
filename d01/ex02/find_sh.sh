# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 19:24:15 by minakim           #+#    #+#              #
#    Updated: 2018/01/10 23:34:23 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** ##!/bin/sh
find . -name "*.sh" | rev | cut -d '/' -f 1 | cut -c 4- | rev
