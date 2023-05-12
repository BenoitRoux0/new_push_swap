/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpopunder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:40:30 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stackpopunder(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (NULL);
	if (!stack->next)
		return (stack);
	while (stack->next->next)
		stack = stack->next;
	tmp = stack->next;
	stack->next = NULL;
	return (tmp);
}
