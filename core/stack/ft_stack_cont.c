/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_cont.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:03:13 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 13:06:19 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	ft_stack_cont(t_stack *stack, int64_t value)
{
	if (!stack)
		return (0);
	if (stack->content == value)
		return (1);
	return (ft_stack_cont(stack->next, value));
}
