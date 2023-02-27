/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:11:18 by beroux            #+#    #+#             */
/*   Updated: 2023/02/27 08:43:27 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int64_t			content;
	struct s_stack	*next;
}	t_stack;

//stack
t_stack			*ft_stacknew(long int value);
void			ft_stackpush(t_stack **stack, t_stack *to_push);
void			ft_stackpushto(t_stack **src, t_stack **dst, char name);
void			ft_stackput(t_stack *stack);
int				ft_stack_cont(t_stack *stack, int64_t value);
void			ft_clearstack(t_stack *stack);
t_stack			*ft_stackpop(t_stack **stack);
void			ft_stackaddunder(t_stack **stack, t_stack *to_add);
t_stack			*ft_stackpopunder(t_stack *stack);
void			ft_stackrotate(t_stack **stack, char name);
void			ft_stackrev_rotate(t_stack **stack, char name);
void			ft_stackswap(t_stack **stack, char name);
size_t			ft_stacksize(t_stack *stack);
int				ft_stackis_sorted(t_stack *stack);

//utils
int64_t			ft_atol(const char *str);
void			ft_makestack_easier(t_stack *stack);
int				check_nb(char *number);

//push swap
t_stack			*parse(int len, char **numbers);
void			sort(t_stack **stack);

//sort
void			radix(t_stack **stack_a, t_stack **stack_b);
void			sort_little_stack(t_stack **stack, t_stack **stack_b);
void			sort_3_elems(t_stack **stack);

#endif
