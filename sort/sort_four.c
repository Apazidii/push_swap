/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:13:50 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_sort(t_base *base)
{
	if (base->a->position < base->a->next->position && \
		base->a->next->position < base->a->next->next->position && \
		base->a->next->next->position < base->a->next->next->next->position)
		return (1);
	return (0);
}

void	sort_four(t_base *base)
{
	if (is_sort(base))
		return ;
	if (base->a->next->position == 0)
		ft_sa(base, 1);
	else if (base->a->next->next->position == 0)
	{
		ft_rra(base, 1);
		ft_rra(base, 1);
	}
	else if (base->a->next->next->next->position == 0)
		ft_rra(base, 1);
	ft_pb(base, 1);
	sort_three(base, 1);
	ft_pa(base, 1);
}
