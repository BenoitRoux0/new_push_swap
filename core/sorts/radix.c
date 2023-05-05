/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:10:49 by beroux            #+#    #+#             */
/*   Updated: 2023/05/05 14:16:44 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static int	radix_loop(t_stack **stack_a, t_stack **stack_b, size_t shift);

int	radix(t_stack **stack_a, t_stack **stack_b)
{
	size_t	i;

	i = 0;
	ft_stack_positive(*stack_a);
	while (i < sizeof(int) * 8 && !ft_stackis_sorted(*stack_a))
	{
		if (!radix_loop(stack_a, stack_b, i))
			return (0);
		i++;
	}
	return (1);
}

static int	radix_loop(t_stack **stack_a, t_stack **stack_b, size_t shift)
{
	size_t	i;
	size_t	size;
	int		ret;

	size = ft_stacksize(*stack_a);
	i = 0;
	ret = 1;
	while (i < size)
	{
		if (((*stack_a)->content >> shift) % 2)
			ret = ft_stackrotate(stack_a, 'a');
		else
			ret = ft_stackpushto(stack_a, stack_b, 'b');
		if (!ret)
			return (0);
		i++;
	}
	size = ft_stacksize(*stack_b);
	i = 0;
	while (i < size)
	{
		if (!ft_stackpushto(stack_b, stack_a, 'a'))
			return (0);
		i++;
	}
	return (1);
}
