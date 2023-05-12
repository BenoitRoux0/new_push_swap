/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:33:55 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_clearstack(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->next)
		ft_clearstack(stack->next);
	free(stack);
}
