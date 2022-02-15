/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:49 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:44:51 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*now;

	if (!(lst && f))
		return (NULL);
	new = ft_lstnew(f(lst->content));
	now = new;
	while (lst->next)
	{
		lst = lst->next;
		now->next = ft_lstnew(f(lst->content));
		if (!(now->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		now = now->next;
	}
	return (new);
}
