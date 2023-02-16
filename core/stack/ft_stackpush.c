/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:41:49 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 13:12:15 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackpush(t_stack **stack, t_stack *to_push)
{
	if (!stack || !to_push)
		return ;
	to_push->next = *stack;
	*stack = to_push;
}
