/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:58:18 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *s, int *size_stack)
{
	t_stack	*f;
	t_stack	*b;

	if (!s)
		return ;
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
