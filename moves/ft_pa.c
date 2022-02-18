/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:05:51 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_base *base)
{
	if (base->size_b == 0)
		return ;
	if (base->size_a != 0)
		ft_add_new_elem(&base->b, &base->a, &base->size_a);
	else
		ft_add_new_elem_in_new_stack(&base->b, &base->a, &base->size_a);
	base->size_b--;
	if (base->size_b == 0)
		base->b = NULL;
	write(1, "pa\n", 3);
}
