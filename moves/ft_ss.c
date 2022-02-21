/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:08:11 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/21 12:48:07 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_base *base, int print)
{
	ft_sa(base, print);
	ft_sb(base, print);
	if (print)
		write(1, "ss\n", 3);
}
