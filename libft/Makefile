# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:20:55 by beroux            #+#    #+#              #
#    Updated: 2023/01/14 11:23:28 by beroux           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRCS =		ft_atoi.c \
			ft_itoa.c \
			char/ft_isalnum.c \
			char/ft_isalpha.c \
			char/ft_isascii.c \
			char/ft_isdigit.c \
			char/ft_isprint.c \
			char/ft_tolower.c \
			char/ft_toupper.c \
			str/ft_strchr.c \
			str/ft_strdup.c \
			str/ft_striteri.c \
			str/ft_strjoin.c \
			str/ft_strlcat.c \
			str/ft_strlcpy.c \
			str/ft_strlen.c \
			str/ft_strmapi.c \
			str/ft_strncmp.c \
			str/ft_strnstr.c \
			str/ft_strrchr.c \
			str/ft_strtrim.c \
			str/ft_split.c \
			str/ft_substr.c \
			files/ft_putchar_fd.c \
			files/ft_putendl_fd.c \
			files/ft_putnbr_fd.c \
			files/ft_putstr_fd.c \
			mem/ft_memchr.c \
			mem/ft_memcmp.c \
			mem/ft_memcpy.c \
			mem/ft_memmove.c \
			mem/ft_memset.c \
			mem/ft_calloc.c \
			mem/ft_bzero.c \
			lst/ft_lstadd_back.c \
			lst/ft_lstadd_front.c \
			lst/ft_lstclear.c \
			lst/ft_lstdelone.c \
			lst/ft_lstiter.c \
			lst/ft_lstlast.c \
			lst/ft_lstmap.c \
			lst/ft_lstnew.c \
			lst/ft_lstsize.c \
			ft_printf/core/ft_printf.c \
			ft_printf/prints/print_char.c \
			ft_printf/prints/print_hex.c \
			ft_printf/prints/print_nbr.c \
			ft_printf/prints/print_ptr.c \
			ft_printf/prints/print_str.c \
			ft_printf/prints/print_uint.c \
			ft_printf/utils/ft_isalnum.c \
			gnl/get_next_line.c \
			gnl/get_next_line_utils.c
			

INCLUDES =	libft.h

OBJS =		$(SRCS:.c=.o)

CFLAGS =	-Wall -Wextra -Werror

$(NAME):	$(OBJS)
			$(AR) -rcs $@ $(OBJS)

all:		$(NAME)

%.o: %.c	$(INCLUDES) Makefile
			$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
			$(RM) $(OBJS)
			$(RM) $(OBJSBNS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean
			$(MAKE) all

.PHONY:		all clean fclean re bonus
