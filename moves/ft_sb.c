/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:07:59 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_base *base, int print)
{
	t_stack	*stack1;
	t_stack	*stack2;

	if (base->size_b <= 1)
		return ;
	stack1 = base->b;
	stack2 = base->b->next;
	stack2->next->prev = stack1;
	stack1->prev->next = stack2;
	stack1->next = stack2->next;
	stack2->prev = stack1->prev;
	stack1->prev = stack2;
	stack2->next = stack1;
	base->b = stack2;
	if (print)
		write(1, "sb\n", 3);
}
