# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 18:56:01 by beroux            #+#    #+#              #
#    Updated: 2023/02/12 18:47:53 by beroux           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

CC =		gcc

CFLAGS =	-Wall -Werror -Wextra

SRCS =		core/push_swap.c			\
			core/stack/ft_stacknew.c	\

OBJS =		$(SRCS:.c=.o)

INC =		core/push_swap.h

%.o:		%.c $(INC) Makefile
			$(CC) $(CFLAGS) -o $@ -c $< -I.

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I.
