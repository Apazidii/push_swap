/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 05:25:41 by oem               #+#    #+#             */
/*   Updated: 2022/02/12 09:27:51 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_create_new_stack(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	new->position = -1;
	new->next = new;
	new->prev = new;
	return (new);
}

t_stack	*ft_add_new_elem(t_stack **stack, int value, int *stack_size)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	new->position = -1;
	new->prev = (*stack)->prev;
	new->next = (*stack);
	(*stack)->prev = new;
	new->prev->next = new;
	*stack_size += 1;
	*stack = new;
	return (new);
}

void	ft_stack_print(t_stack *stack, int stack_size)
{
	if (stack_size != 0)
	{
		printf("--------------------\n");
		printf("Stack value: %d\n", stack->value);
		printf("Stack->next value: %d\n", stack->next->value);
		printf("Stack->prev value: %d\n", stack->prev->value);
		printf("Stack->pos value: %d\n", stack->position);
		printf("--------------------\n");
		ft_stack_print(stack->next, stack_size -1);
	}
}
