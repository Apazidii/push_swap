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

void	sort_three(t_base *base, int start)
{
	if (base->a->position == start)
	{
		ft_sa(base);
		ft_ra(base);
	}
	else if (base->a->position == start + 1)
	{
		if (base->a->next->position == start)
			ft_sa(base);
		else
			ft_rra(base);
	}
	else if (base->a->position == start + 2)
	{
		if (base->a->next->position == start)
			ft_ra(base);
		else
		{
			ft_sa(base);
			ft_rra(base);
		}
	}
}
