/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:10:49 by beroux            #+#    #+#             */
/*   Updated: 2023/02/17 18:04:32 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static void	radix_loop(t_stack **stack_a, t_stack **stack_b, size_t shift);

void	radix(t_stack **stack_a, t_stack **stack_b)
{
	size_t	i;

	i = 0;
	ft_makestack_easier(*stack_a);
	while (i < sizeof(int) * 8 && !ft_stackis_sorted(*stack_a))
	{
		radix_loop(stack_a, stack_b, i);
		i++;
	}
}

static void	radix_loop(t_stack **stack_a, t_stack **stack_b, size_t shift)
{
	size_t	i;
	size_t	size;

	size = ft_stacksize(*stack_a);
	i = 0;
	while (i < size)
	{
		if (((*stack_a)->content >> shift) % 2)
			ft_stackrotate(stack_a, 'a');
		else
			ft_stackpushto(stack_a, stack_b, 'b');
		i++;
	}
	size = ft_stacksize(*stack_b);
	i = 0;
	while (i < size)
	{
		ft_stackpushto(stack_b, stack_a, 'a');
		i++;
	}
}
