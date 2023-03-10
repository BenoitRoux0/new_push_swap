/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:56:39 by beroux            #+#    #+#             */
/*   Updated: 2023/02/19 17:37:56 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

static char	*join_args(int len, char **args);
static void	clear_args(char **args, t_stack *stack);
static char	**init_args(int len, char **args);

t_stack	*parse(int len, char **numbers)
{
	t_stack	*stack;
	t_stack	*to_push;
	int64_t	nb;
	size_t	i;

	numbers = init_args(len, numbers);
	if (!numbers)
		return (NULL);
	stack = NULL;
	i = 0;
	while (numbers[i])
	{
		if (!check_nb(numbers[i]))
			return (clear_args(numbers, stack), NULL);
		nb = ft_atol(numbers[i]);
		if (nb > INT_MAX || nb < INT_MIN || ft_stack_cont(stack, nb))
			return (clear_args(numbers, stack), NULL);
		to_push = ft_stacknew(nb);
		if (!to_push)
			return (clear_args(numbers, stack), NULL);
		ft_stackaddunder(&stack, to_push);
		i++;
	}
	clear_args(numbers, NULL);
	return (stack);
}

static void	clear_args(char **args, t_stack *stack)
{
	size_t	i;

	if (stack)
		ft_clearstack(stack);
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

static char	**init_args(int len, char **args)
{
	char	*joined;
	char	**split;

	if (!ft_strlen(*args))
		return (NULL);
	joined = join_args(len, args);
	if (!joined)
		return (NULL);
	if (!ft_strlen(joined))
	{
		free(joined);
		joined = ft_strdup("0");
	}
	if (!joined)
		return (NULL);
	split = ft_split(joined, ' ');
	free(joined);
	return (split);
}

static char	*join_args(int len, char **args)
{
	char	*tmp;
	char	*joined;
	int		i;

	joined = ft_strdup(*args);
	i = 1;
	tmp = NULL;
	while (i < len)
	{
		tmp = ft_strjoin(joined, " ");
		free(joined);
		if (!tmp)
			return (NULL);
		joined = tmp;
		tmp = ft_strjoin(joined, args[i]);
		if (!tmp || ft_strlen(tmp) == ft_strlen(joined))
		{
			free(joined);
			return (free(tmp), NULL);
		}
		free(joined);
		joined = tmp;
		i++;
	}
	return (joined);
}
