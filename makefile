# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 16:12:35 by jhor              #+#    #+#              #
#    Updated: 2024/11/07 15:42:04 by jhor             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC1	=	ft_isalpha.c ft_isdigit.c

cc = gcc

CFLAGS	=	-Wall -Wextra -Werror

$(SRC1: .c)

a.out	:	ft_isalpha.o

%.o	:	%.c 
				${cc} ${CFLAGS} -c $< -o $@ 

clean:
	rm -f *.o