/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:35:47 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_sort(t_base *base)
{
	if (base->a->position < base->a->next->position && \
		base->a->next->position < base->a->next->next->position)
		return (1);
	return (0);
}

void	sort_three(t_base *base, int start)
{
	if (is_sort(base))
		return ;
	if (base->a->position == start)
	{
		ft_sa(base, 1);
		ft_ra(base, 1);
	}
	else if (base->a->position == start + 1)
	{
		if (base->a->next->position == start)
			ft_sa(base, 1);
		else
			ft_rra(base, 1);
	}
	else if (base->a->position == start + 2)
	{
		if (base->a->next->position == start)
			ft_ra(base, 1);
		else
		{
			ft_sa(base, 1);
			ft_rra(base, 1);
		}
	}
}
