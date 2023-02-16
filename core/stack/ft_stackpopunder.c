/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpopunder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:40:30 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 23:42:21 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

t_stack	*ft_stackpopunder(t_stack *stack)
{
	t_stack	*tmp;

	while (stack->next)
		stack = stack->next;
	tmp = stack->next;
	stack->next = NULL;
	return (tmp);
}