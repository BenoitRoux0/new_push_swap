/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:10:50 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 14:41:49 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

t_stack	*parse(int len, char **numbers)
{
	t_stack	*stack;
	t_stack	*to_push;
	int64_t	nb;

	if (!(*numbers))
		return (NULL);
	stack = NULL;
	len--;
	while (len >= 0)
	{
		nb = ft_atol(numbers[len]);
		if (nb > INT_MAX || nb < INT_MIN || ft_stack_cont(stack, nb))
			return (ft_clearstack(stack), NULL);
		to_push = ft_stacknew(nb);
		if (!to_push)
			return (ft_clearstack(stack), NULL);
		ft_stackpush(&stack, to_push);
		len--;
	}
	return (stack);
}

t_stack	*split_and_parse(char *numbers)
{
	char	**splited_numbers;
	int		len;

	splited_numbers = ft_split(numbers, ' ');
	while (splited_numbers[len])
		len++;
	return (parse(len, splited_numbers));
}
