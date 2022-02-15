/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:46 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:44:48 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*now;

	if (!lst)
		return (NULL);
	now = lst;
	while (now->next != NULL)
		now = now->next;
	return (now);
}
