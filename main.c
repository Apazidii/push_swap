/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:59:34 by oem               #+#    #+#             */
/*   Updated: 2022/02/12 09:27:51 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	int		stack_size;

	//добавить проверку на валидность
	argc--;
	stack = ft_create_new_stack(ft_atoi(argv[argc]));
	stack_size = 1;
	argc--;
	while (argc--)
		ft_add_new_elem(&stack, ft_atoi(argv[argc + 1]), &stack_size);
	ft_set_position(stack, stack_size);
	ft_stack_print(stack, stack_size);
}
