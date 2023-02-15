/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:42:30 by beroux            #+#    #+#             */
/*   Updated: 2023/02/12 18:48:05 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

t_stack	*ft_stacknew(long int value)
{
	t_stack	*stack;

	stack = malloc(sizeof(stack));
	if (!stack)
		return (NULL);
	stack->content = value;
	stack->next = NULL;
	return (stack);
}
