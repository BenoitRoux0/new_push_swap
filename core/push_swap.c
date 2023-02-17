/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:54:45 by beroux            #+#    #+#             */
/*   Updated: 2023/02/17 18:08:13 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2)
		return (0);
	stack = parse(ac - 1, av + 1);
	if (!stack)
		return (write(1, "Error\n", 6), 0);
//	sort(&stack);
	ft_stackput(stack);
	ft_makestack_easier(stack);
	ft_stackput(stack);
	return (0);
}
