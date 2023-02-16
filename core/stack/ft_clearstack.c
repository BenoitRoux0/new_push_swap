/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:33:55 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 18:26:38 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_clearstack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->next)
		ft_clearstack(stack->next);
	free(stack);
}
