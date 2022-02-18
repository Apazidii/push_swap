/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 08:38:31 by oem               #+#    #+#             */
/*   Updated: 2022/02/18 02:03:42 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if(a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j+1] ;
				a[j+1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	min_in_arr(int *arr, int size, int lastmin)
{
	int	min;
	int	i;

	min = (int)(((unsigned int) -1) / 2);
	i = 0;
	while (i < size)
	{
		if (arr[i] <= min && arr[i] > lastmin)
		{
			min = arr[i];
		}
		i++;
	}
	return (min);
}

void	ft_set_position(t_stack *stack, int stack_size, int *arg)
{
	int i;
	t_stack *first;

	first = stack;
	sort(arg, stack_size);
	i = 0;
	while (i < stack_size)
	{
//		printf("i = %d arg = %d\n", i, arg[i]);
		while (stack->value != arg[i])
			stack = stack->next;
		stack->position = i;
		stack = first;
		i++;
	}
}

//void	ft_set_position(t_stack *stack, int stack_size, int *arg)
//{
//	int		min;
//	t_stack	*start;
//	int		i;
//
//	i = 0;
//	start = stack;
//
//	min = min_in_arr(arg, stack_size, INT_MIN);
//	while (i < stack_size)
//	{
//		while (stack->value != min)
//			stack = stack->next;
//		stack->position = i;
//		stack = start;
//		min = min_in_arr(arg, stack_size, min);
//		i++;
//	}
//}
