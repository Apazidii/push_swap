/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:07:45 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_base *base, int print)
{
	t_stack	*stack1;
	t_stack	*stack2;

	if (base->size_a <= 1)
		return ;
	stack1 = base->a;
	stack2 = base->a->next;
	stack2->next->prev = stack1;
	stack1->prev->next = stack2;
	stack1->next = stack2->next;
	stack2->prev = stack1->prev;
	stack1->prev = stack2;
	stack2->next = stack1;
	base->a = stack2;
	if (print)
		write(1, "sa\n", 3);
}
