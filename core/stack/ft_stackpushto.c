/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpushto.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:41:45 by beroux            #+#    #+#             */
/*   Updated: 2023/05/12 10:29:05 by beroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stackpushto(t_stack **src, t_stack **dst, char name)
{
	t_stack	*to_push;

	if (!src || !(*src) || !dst)
		return (0);
	to_push = ft_stackpop(src);
	ft_stackpush(dst, to_push);
	if (!name)
		return (0);
	return (ft_printf("p%c\n", name) == 3);
}
