/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:58 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:44:46 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTS_H
# define PRINTS_H

# include <stddef.h>
# include <stdint.h>
# include <unistd.h>

int	print_char(int fd, const char c);
int	print_str(int fd, const char *s);
int	print_nbr(int fd, int n);
int	print_ptr(int fd, void *ptr);
int	print_hex(int fd, uintptr_t h, int lower);
int	print_uint(int fd, unsigned int n);

#endif
