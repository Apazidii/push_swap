/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:06:09 by oem               #+#    #+#             */
/*   Updated: 2022/02/17 18:06:09 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_base *base)
{
	if (base->size_a == 0)
		return ;
	if (base->size_b != 0)
		ft_add_new_elem(&base->a, &base->b, &base->size_b);
	else
		ft_add_new_elem_in_new_stack(&base->a, &base->b, &base->size_b);
	base->size_a--;
	if (base->size_a == 0)
		base->a = NULL;
}
