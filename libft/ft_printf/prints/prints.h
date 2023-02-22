/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:12:58 by beroux            #+#    #+#             */
/*   Updated: 2022/11/21 11:27:46 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTS_H
# define PRINTS_H

# include <stdint.h>

int	print_char(const char c);
int	print_str(const char *s);
int	print_nbr(int n);
int	print_ptr(void *ptr);
int	print_hex(uintptr_t h, int lower);
int	print_uint(unsigned int n);

#endif
