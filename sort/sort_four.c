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

void	sort_four(t_base *base)
{
	if (base->a->next->position == 0)
		ft_sa(base);
	else if (base->a->next->next->position == 0)
	{
		ft_rra(base);
		ft_rra(base);
	}
	else if (base->a->next->next->next->position == 0)
		ft_rra(base);
	ft_pb(base);
	sort_three(base, 1);
	ft_pa(base);
}
