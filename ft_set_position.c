/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 08:38:31 by oem               #+#    #+#             */
/*   Updated: 2022/02/12 09:27:51 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_position(t_stack *stack, int stack_size)
{
	int		now_min;
	int		prev_min;
	int		i;
	int		j;
	t_stack	*stack_min;

	j = 0;
	now_min = stack->value;
	prev_min = now_min;
	while (j++ < stack_size)
	{
		i = 0;
		while (i++ < stack_size)
		{
			if (stack->value < now_min && stack->value >= prev_min)
			{
				now_min = stack->value;
				stack_min = stack;
			}
			stack = stack->next;
		}
		prev_min = now_min;
		stack_min->position = j;
//		stack = stack->next;
	}
}
