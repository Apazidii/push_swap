/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:06:09 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_base *base, int print)
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
    if (print)
        write(1, "pb\n", 3);
}
