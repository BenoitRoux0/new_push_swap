/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:03:01 by beroux            #+#    #+#             */
/*   Updated: 2023/02/16 14:10:10 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackput(t_stack *stack)
{
	if (!stack)
		return ;
	printf("%lu\n", stack->content);
	if (stack->next)
		ft_stackput(stack->next);
}