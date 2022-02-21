/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:10:49 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/21 13:10:49 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void apply_cmd(char *text, t_base *base)
{
	if (ft_strncmp("pa\n", text, 3) == 0)
		ft_pa(base, 0);
	else if (ft_strncmp("pb\n", text, 3) == 0)
		ft_pb(base, 0);
	else if (ft_strncmp("ra\n", text, 3) == 0)
		ft_ra(base, 0);
	else if (ft_strncmp("rb\n", text, 3) == 0)
		ft_rb(base, 0);
	else if (ft_strncmp("rr\n", text, 3) == 0)
		ft_rr(base, 0);
	else if (ft_strncmp("rra\n", text, 4) == 0)
		ft_rra(base, 0);
	else if (ft_strncmp("rrb\n", text, 4) == 0)
		ft_rrb(base, 0);
	else if (ft_strncmp("rrr\n", text, 4) == 0)
		ft_rrr(base, 0);
	else if (ft_strncmp("sa\n", text, 3) == 0)
		ft_sa(base, 0);
	else if (ft_strncmp("sb\n", text, 3) == 0)
		ft_sb(base, 0);
	else if (ft_strncmp("ss\n", text, 3) == 0)
		ft_ss(base, 0);
}

static int is_sort(t_base *base)
{
	int i;

	if (!base->a)
		return (0);
	i = 0;
	while (i < base->size_a - 1)
	{
		if (base->a->value >= base->a->next->value)
			return (0);
		i++;
	}
	return (1);
}

void get_command(t_base *base)
{
	char *str;

	str = get_next_line(0);
	while (str)
	{
		apply_cmd(str, base);
		free(str);
		str = get_next_line(0);
	}
	if (is_sort(base))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n",3);
}
