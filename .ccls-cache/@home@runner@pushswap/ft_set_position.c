/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 08:38:31 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:46 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_in_arr(int *arr, int size, int lastmin)
{
	int	min;
	int	i;
	int f;

	min = (int)(((unsigned int) -1) /2);
	i = 0;
	f = 0;
	while (i < size)
	{
		if (arr[i] <= min && arr[i] > lastmin)
		{
			f = 1;
			min = arr[i];
		}
		i++;
	}
	if (!f)
		return (-1);
	return (min);
}

void	ft_set_position(t_stack *stack, int stack_size, int *arg)
{
	int		min;
	t_stack	*start;
	int		i;
	int		j;

	i = 0;
	start = stack;
	min = min_in_arr(arg, stack_size, -1);
	while (i < stack_size)
	{
		while (stack->value != min)
			stack = stack->next;
		stack->position = i;
		stack = start;
		min = min_in_arr(arg, stack_size, min);
		i++;
	}
}