/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:32:22 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/21 12:32:33 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *s, int *size_stack)
{
	t_stack	*b;

	if (!s)
		return ;
	while ((*size_stack)--)
	{
		b = s->next;
		free(s);
		s = b;
	}
}

void	ft_free_base(t_base *base)
{
	ft_free_stack(base->a, &base->size_a);
	ft_free_stack(base->b, &base->size_b);
	free(base);
}
