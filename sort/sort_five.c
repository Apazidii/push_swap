/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:45:45 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/21 12:51:21 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_base *base)
{
	if (base->a->next->position == 4)
		ft_sa(base, 1);
	else if (base->a->next->next->position == 4)
	{
		ft_ra(base, 1);
		ft_ra(base, 1);
	}
	else if (base->a->prev->prev->position == 4)
	{
		ft_rra(base, 1);
		ft_rra(base, 1);
	}
	else if (base->a->prev->position == 4)
		ft_rra(base, 1);
	ft_pb(base, 1);
	sort_four(base);
	ft_pa(base, 1);
	ft_ra(base, 1);
}
