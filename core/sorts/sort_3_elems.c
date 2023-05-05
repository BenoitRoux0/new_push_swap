/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_elems.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 06:25:41 by beroux            #+#    #+#             */
/*   Updated: 2023/02/27 09:37:18 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	sort_3_elems(t_stack **stack)
{
	if (!stack || !(*stack))
		return ;
	if (ft_stacksize(*stack) == 1 || ft_stackis_sorted(*stack))
		return ;
	if (ft_stacksize(*stack) == 2)
	{
		write(1, "sa\n", 3);
		return ;
	}
	ft_stack_positive(*stack);
	if ((*stack)->content == 0)
		write(1, "rra\nsa\n", 7);
	else if ((*stack)->next->content == 0)
	{
		if ((*stack)->content < (*stack)->next->next->content)
			write(1, "sa\n", 3);
		else
			write(1, "ra\n", 3);
	}
	else
	{
		if ((*stack)->content > (*stack)->next->content)
			write(1, "sa\n", 3);
		write(1, "rra\n", 4);
	}
}
