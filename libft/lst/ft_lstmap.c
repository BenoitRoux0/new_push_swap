/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:43:19 by beroux            #+#    #+#             */
/*   Updated: 2022/11/17 12:25:06 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*res;
	t_list	*to_add;

	if (!lst || !f || !del)
		return (NULL);
	tmp = lst->next;
	res = ft_lstnew(f(lst->content));
	while (tmp)
	{
		to_add = ft_lstnew(f(tmp->content));
		if (!to_add)
		{
			ft_lstclear(&res, del);
			return ((t_list *) 0);
		}
		ft_lstadd_back(&res, to_add);
		tmp = tmp->next;
	}
	return (res);
}
