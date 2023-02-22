# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 18:56:01 by beroux            #+#    #+#              #
#    Updated: 2023/02/15 15:00:14 by beroux           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME =		push_swap

CFLAGS =	-Wall -Werror -Wextra -g #-fsanitize=address

SRCS =		core/push_swap.c				\
			core/sort.c						\
			core/parsing.c					\
			core/ft_makestack_easier.c		\
			core/ft_atol.c					\
			core/check_nb.c					\
			core/stack/ft_stacknew.c		\
			core/stack/ft_stackpush.c		\
			core/stack/ft_stackpushto.c		\
			core/stack/ft_stackpushunder.c	\
			core/stack/ft_stackpopunder.c	\
			core/stack/ft_stack_cont.c		\
			core/stack/ft_clearstack.c		\
			core/stack/ft_stackpop.c		\
			core/stack/ft_stacksize.c		\
			core/stack/ft_stackswap.c		\
			core/stack/ft_stackrotate.c		\
			core/stack/ft_stackrev_rotate.c	\
			core/stack/ft_stackis_sorted.c	\
			core/sorts/radix.c				\
			core/sorts/sort_3_elems.c		\
			core/sorts/sort_5_elems.c		\

OBJS =		$(SRCS:%.c=%.o)

INC =		core/push_swap.h

%.o:		%.c $(INC) Makefile
			$(CC) $(CFLAGS) -o $@ -c $< -I.

all:		$(NAME)

$(NAME):	libft/libft.a $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft/libft.a -I.

clean:
			$(RM) $(OBJS)
			$(MAKE) -C libft clean

fclean:		clean
			$(RM) $(NAME)
			$(MAKE) -C libft fclean

re:			fclean
			$(MAKE) all

libft/libft.a:
			make -C libft

.PHONY:		all clean fclean libft