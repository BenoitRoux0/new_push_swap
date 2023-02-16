/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 23:31:24 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 23:47:26 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackrotate(t_stack **stack, char name)
{
	t_stack	*tmp;

	tmp = ft_stackpop(stack);
	ft_stackaddunder(stack, tmp);
	write(1, "r", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}
