/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:58:18 by oem               #+#    #+#             */
/*   Updated: 2022/02/17 17:58:19 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *s, int *size_stack)
{
	t_stack	*f;
	t_stack	*b;

	f = s;
	s = s->next;
	if (!s)
		return ;
	while (s != f)
	{
		b = s->next;
		free(s);
		s = b;
	}
	free(s);
	*size_stack = 0;
}

void	ft_free_base(t_base *base)
{
	ft_free_stack(base->a, &base->size_a);
	ft_free_stack(base->b, &base->size_b);
}
