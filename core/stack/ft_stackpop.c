/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:41:51 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 17:48:35 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

t_stack	*ft_stackpop(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	return (tmp);
}
