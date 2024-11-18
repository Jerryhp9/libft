# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 16:12:35 by jhor              #+#    #+#              #
#    Updated: 2024/11/11 16:23:24 by jhor             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC1	=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c
cc = gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJ1	:	$(SRC1: .c = .o)

a.out	:	ft_isalpha.o

%.o	:	%.c 
				${cc} ${CFLAGS} -c $< -o $@ 

clean:
	rm -f *.o