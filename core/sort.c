/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:22:59 by beroux            #+#    #+#             */
/*   Updated: 2023/02/27 08:44:24 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	sort(t_stack **stack)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_stacksize(*stack) <= 35)
		sort_little_stack(stack, &stack_b);
	else
		radix(stack, &stack_b);
}
