/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:56 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:44:57 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*now;

	if (lst)
	{
		i = 1;
		now = lst;
		while (now)
		{
			i++;
			now = now->next;
		}
		return (i - 1);
	}
	return (0);
}
