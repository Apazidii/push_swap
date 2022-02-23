/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_general_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:59:23 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char *s)
{
	write(2, s, ft_strlen(s));
	exit(0);
}

int	max_in_stack(t_stack *stack, int size)
{
	int	max;
	int	i;

	max = stack->position;
	i = 0;
	while (i < size)
	{
		if (stack->position > max)
			max = stack->position;
		stack = stack->next;
		i++;
	}
	return (max);
}

int	elem_upper_middle(t_stack *stack, int size, int value)
{
	int	i;

	i = 0;
	while (stack->position != value)
	{
		stack = stack->next;
		i++;
	}
	if (i >= size / 2)
		return (1);
	else
		return (0);
}
