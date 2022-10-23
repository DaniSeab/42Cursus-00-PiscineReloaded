# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlima-se <dlima-se@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 22:15:32 by dlima-se          #+#    #+#              #
#    Updated: 2022/09/07 20:48:46 by dlima-se         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
SRCS		= srcs/*
INC			= -I includes/*
OBJS		= *.o
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

all: objs
	ar -rcs $(NAME) ${OBJS}
	ar -t $(NAME)

objs: ${wildcard srcs/*.c}
	${CC} ${CFLAGS} -c $^ ${INC}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all