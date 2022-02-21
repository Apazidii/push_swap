/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:22:57 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	butterfly_to_arr(t_base *base)
{
	int	max;
	int	f;

	while (base->size_b != 0)
	{
		max = max_in_stack(base->b, base->size_b);
		f = elem_upper_middle(base->b, base->size_b, max);
		while (base->b->position != max)
		{
			if (!f)
				ft_rb(base, 1);
			else
				ft_rrb(base, 1);
		}
		ft_pa(base, 1);
	}
}

static void	ft_sort(t_base *base, int action)
{
	int	count;

	count = 0;
	while (base->a)
	{
		if (count > 1 && base->a->position <= count)
		{
			ft_pb(base, 1);
			ft_rb(base, 1);
			count++;
		}
		else if (base->a->position <= (count + action))
		{
			ft_pb(base, 1);
			count++;
		}
		else if (base->a->position >= count)
			ft_ra(base, 1);
	}
	butterfly_to_arr(base);
}

void	sort_many(t_base *base)
{
	if (base->size_a <= 100)
		ft_sort(base, 15);
	else
		ft_sort(base, 30);
}
