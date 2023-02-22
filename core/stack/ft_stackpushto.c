/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackpushto.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:41:45 by beroux            #+#    #+#             */
/*   Updated: 2023/02/15 17:48:08 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "core/push_swap.h"

void	ft_stackpushto(t_stack **src, t_stack **dst, char name)
{
	t_stack	*to_push;

	if (!src || !(*src) || !dst)
		return ;
	to_push = ft_stackpop(src);
	ft_stackpush(dst, to_push);
	if (!name)
		return ;
	write(1, "p", 1);
	write(1, &name, 1);
	write(1, "\n", 1);
}
