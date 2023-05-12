/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrev_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:53:03 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stackrev_rotate(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = ft_stackpopunder(*stack);
	tmp->next = *stack;
	*stack = tmp;
	if (!name)
		return (0);
	return (ft_printf("rr%c\n", name) == 4);
}
