# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minakim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/10 18:43:18 by minakim           #+#    #+#              #
#    Updated: 2018/01/10 20:03:01 by minakim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
( find . -type d && find . -type f ) | wc -l | sed 's/ //g'
