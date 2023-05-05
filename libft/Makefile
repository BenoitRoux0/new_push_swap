# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:20:55 by beroux            #+#    #+#              #
#    Updated: 2023/05/04 15:55:41 by beroux           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

DIR_LIBFT ?= 						.

LIBFT =								$(DIR_LIBFT)/libft.a

DIR_OBJS_LIBFT =					.objs

SRCS_LIBFT =						$(DIR_LIBFT)/ft_atoi.c \
									$(DIR_LIBFT)/mem/ft_bzero.c \
									$(DIR_LIBFT)/mem/ft_calloc.c \
									$(DIR_LIBFT)/char/ft_isalnum.c \
									$(DIR_LIBFT)/char/ft_isalpha.c \
									$(DIR_LIBFT)/char/ft_isascii.c \
									$(DIR_LIBFT)/char/ft_isdigit.c \
									$(DIR_LIBFT)/char/ft_isprint.c \
									$(DIR_LIBFT)/mem/ft_memchr.c \
									$(DIR_LIBFT)/mem/ft_memcmp.c \
									$(DIR_LIBFT)/mem/ft_memcpy.c \
									$(DIR_LIBFT)/mem/ft_memmove.c \
									$(DIR_LIBFT)/mem/ft_memset.c \
									$(DIR_LIBFT)/str/ft_strchr.c \
									$(DIR_LIBFT)/str/ft_strlcat.c \
									$(DIR_LIBFT)/str/ft_strlcpy.c \
									$(DIR_LIBFT)/str/ft_strlen.c \
									$(DIR_LIBFT)/str/ft_strcmp.c \
									$(DIR_LIBFT)/str/ft_strncmp.c \
									$(DIR_LIBFT)/str/ft_strnstr.c \
									$(DIR_LIBFT)/str/ft_strrchr.c \
									$(DIR_LIBFT)/char/ft_tolower.c \
									$(DIR_LIBFT)/char/ft_toupper.c \
									$(DIR_LIBFT)/ft_itoa.c \
									$(DIR_LIBFT)/files/ft_putchar_fd.c \
									$(DIR_LIBFT)/files/ft_putendl_fd.c \
									$(DIR_LIBFT)/files/ft_putnbr_fd.c \
									$(DIR_LIBFT)/files/ft_putstr_fd.c \
									$(DIR_LIBFT)/str/ft_strdup.c \
									$(DIR_LIBFT)/str/ft_substr.c \
									$(DIR_LIBFT)/str/ft_strjoin.c \
									$(DIR_LIBFT)/str/ft_strtrim.c \
									$(DIR_LIBFT)/str/ft_strmapi.c \
									$(DIR_LIBFT)/str/ft_split.c \
									$(DIR_LIBFT)/str/ft_striteri.c \
									$(DIR_LIBFT)/ft_printf/core/ft_printf.c \
									$(DIR_LIBFT)/ft_printf/prints/print_char.c \
									$(DIR_LIBFT)/ft_printf/prints/print_hex.c \
									$(DIR_LIBFT)/ft_printf/prints/print_nbr.c \
									$(DIR_LIBFT)/ft_printf/prints/print_ptr.c \
									$(DIR_LIBFT)/ft_printf/prints/print_str.c \
									$(DIR_LIBFT)/ft_printf/prints/print_uint.c \
									$(DIR_LIBFT)/gnl/get_next_line.c \
									$(DIR_LIBFT)/gnl/get_next_line_utils.c

INCLUDES_LIBFT =					$(DIR_LIBFT)/libft.h

OBJS_LIBFT =						$(SRCS_LIBFT:$(DIR_LIBFT)/%.c=$(DIR_LIBFT)/$(DIR_OBJS_LIBFT)/%.o)

CFLAGS_LIBFT ?=						-Wall -Wextra -Werror

all:								$(LIBFT)

$(LIBFT):							$(OBJS_LIBFT)
									$(AR) -rcs $@ $(OBJS_LIBFT)

$(DIR_LIBFT)/$(DIR_OBJS_LIBFT)/%.o:	$(DIR_LIBFT)/%.c $(INCLUDES_LIBFT)
									@[ -d $(shell dirname $@) ] || (mkdir -p $(shell dirname $@) && echo "$(shell dirname $@) created")
									$(CC) $(CFLAGS_LIBFT) -c $< -o $@ -I$(DIR_LIBFT)

clean::
									$(RM) -r $(DIR_LIBFT)/$(DIR_OBJS_LIBFT)

fclean::							clean
									$(RM) $(LIBFT)

re::								fclean
									$(MAKE) -C $(DIR_LIBFT) all

.PHONY:								all clean fclean re
