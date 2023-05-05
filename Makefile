# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 18:56:01 by beroux            #+#    #+#              #
#    Updated: 2023/05/04 16:43:32 by beroux           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

DIR_LIBFT =			libft

include				libft/Makefile

NAME =				push_swap

CFLAGS =			-Wall -Wextra -Werror

ifdef DEBUG
	CFLAGS += -g3
endif

ifdef SANITIZE
	CFLAGS += -fsanitize=address
endif

DIR_OBJS =			.objs

DIR_SRCS =			core

SRCS =				$(DIR_SRCS)/push_swap.c					\
					$(DIR_SRCS)/sort.c						\
					$(DIR_SRCS)/parsing.c					\
					$(DIR_SRCS)/ft_stack_positive.c			\
					$(DIR_SRCS)/ft_atol.c					\
					$(DIR_SRCS)/check_nb.c					\
					$(DIR_SRCS)/stack/ft_stacknew.c			\
					$(DIR_SRCS)/stack/ft_stackpush.c		\
					$(DIR_SRCS)/stack/ft_stackpushto.c		\
					$(DIR_SRCS)/stack/ft_stackpushunder.c	\
					$(DIR_SRCS)/stack/ft_stackpopunder.c	\
					$(DIR_SRCS)/stack/ft_stack_cont.c		\
					$(DIR_SRCS)/stack/ft_clearstack.c		\
					$(DIR_SRCS)/stack/ft_stackpop.c			\
					$(DIR_SRCS)/stack/ft_stacksize.c		\
					$(DIR_SRCS)/stack/ft_stackswap.c		\
					$(DIR_SRCS)/stack/ft_stackrotate.c		\
					$(DIR_SRCS)/stack/ft_stackrev_rotate.c	\
					$(DIR_SRCS)/stack/ft_stackis_sorted.c	\
					$(DIR_SRCS)/sorts/radix.c				\
					$(DIR_SRCS)/sorts/sort_3_elems.c		\
					$(DIR_SRCS)/sorts/sort_little_stack.c	\

OBJS =				$(SRCS:$(DIR_SRCS)/%.c=$(DIR_OBJS)/%.o)

INC =				core/push_swap.h

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c $(INC) Makefile
					@[ -d $(shell dirname $@) ] || \
					 (mkdir -p $(shell dirname $@) && \
					  echo "$(shell dirname $@) created")
					$(CC) $(CFLAGS) -o $@ -c $< -I. -I$(DIR_LIBFT)

all:				$(NAME)

$(NAME):			$(OBJS) $(LIBFT)
					$(CC) $(CFLAGS) -o $(NAME) $^ -I. -I$(DIR_LIBFT)

clean::
					$(RM) -r $(DIR_OBJS)

fclean::			clean
					$(RM) $(NAME)

re::				fclean
					$(MAKE) all

.PHONY:				all clean fclean libft re
