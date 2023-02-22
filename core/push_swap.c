/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:54:45 by beroux            #+#    #+#             */
/*   Updated: 2023/02/20 17:55:14 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static size_t	len_args(int len, char **args);

int	main(int ac, char **av)
{
	t_stack	*stack;

	if (ac < 2 || (len_args(ac, av) == 1 && ac > 2))
		return (0);
	stack = parse(ac - 1, av + 1);
	if (!stack)
		return (write(2, "Error\n", 6), 0);
	sort(&stack);
	return (0);
}

static size_t	len_args(int len, char **args)
{
	size_t	tot_len;
	int		i;

	tot_len = 0;
	i = 1;
	if (len == 2)
		return (1);
	while (i < len)
	{
		tot_len += ft_strlen(args[i]);
		i++;
	}
	return (tot_len);
}
