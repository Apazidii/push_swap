/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:43 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:44:45 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;
	t_list	*now;

	now = lst;
	while (now)
	{
		if (f)
		{
			f(now->content);
		}
		next = now->next;
		now = next;
	}
}
