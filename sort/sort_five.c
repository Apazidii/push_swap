/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:45:45 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_five(t_base *base)
{
	if (base->a->next->position == 4)
		ft_sa(base);
	else if (base->a->next->next->position == 4)
	{
		ft_ra(base);
		ft_ra(base);
	}
	else if (base->a->prev->prev->position == 4)
	{
		ft_rra(base);
		ft_rra(base);
	}
	else if (base->a->prev->position == 4)
		ft_rra(base);
	ft_pb(base);
	sort_four(base);
	ft_pa(base);
	ft_ra(base);
}
