/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:24:27 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:32:32 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef LIBFT_H
#  error Include libft to use get next line
# endif

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*find_newline(const char *s);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*save_after_new_line(char *prec);
char	*ft_extract_line(char *prec);
size_t	ft_strlen_g(const char *s);

#endif
