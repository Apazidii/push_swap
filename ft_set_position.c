/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 08:38:31 by oem               #+#    #+#             */
/*   Updated: 2022/02/13 17:45:45 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_in_arr(int *arr, int size)
{
	int	min;

	min = arr[0];
	while (size--)
	{
		if (*arr < min && *arr != -1)
			min = *arr;
		arr++;
	}
	return (min);
}

void	ft_set_position(t_stack *stack, int stack_size, int *arg)
{
	int		min;
	t_stack	*start;
	int		i;

	i = 0;
	start = stack;
	while (i++ < stack_size)
	{
		min = min_in_arr(arg, stack_size);
		while (stack->value != min)
			stack = stack->next;
		stack->position = i;
		stack = start;
	}
}

//void	ft_set_position(t_stack *stack, int stack_size)
//{
//	int		now_min;
//	int		prev_min;
//	int		i;
//	int		j;
//	t_stack	*stack_min;
//
//	j = 0;
//	now_min = stack->value;
//	prev_min = -2147483648;
//	while (j++ < stack_size)
//	{
//		i = 0;
//		while (i++ < stack_size)
//		{
//			if (stack->value <= now_min && stack->value >= prev_min)
//			{
//				now_min = stack->value;
//				stack_min = stack;
//			}
//			stack = stack->next;
//		}
//		prev_min = now_min;
//		now_min = stack->value;
//		stack_min->position = j;
////		stack = stack->next;
//	}
//}
