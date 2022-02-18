/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 02:31:25 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	get_sort(t_base *base)
{
	if (base->size_a == 1)
		return ;
	else if (base->size_a == 2)
		sort_two(base);
	else if (base->size_a == 3)
		sort_three(base, 0);
	else if (base->size_a == 4)
		sort_four(base);
	else if (base->size_a == 5)
		sort_five(base);
	else
		sort_many(base);
}
