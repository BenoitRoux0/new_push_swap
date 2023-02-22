/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrev_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:53:03 by beroux            #+#    #+#             */
/*   Updated: 2023/02/20 17:17:42 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackrev_rotate(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = ft_stackpopunder(*stack);
	tmp->next = *stack;
	*stack = tmp;
	if (!name)
		return ;
	write(1, "rr", 2);
	write(1, &name, 1);
	write(1, "\n", 1);
}
