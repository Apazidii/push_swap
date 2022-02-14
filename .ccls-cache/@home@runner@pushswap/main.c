/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:59:34 by oem               #+#    #+#             */
/*   Updated: 2022/02/13 17:35:55 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*argv_to_arr(int size, char *argv[])
{
	int	*res;

	res = (int *)malloc(sizeof(int) * size);
	while (size--)
		res[size] = ft_atoi(argv[size + 1]);
	return (res);
}

int	main(int argc, char *argv[])
{
	t_stack		*stack;
	int			*arg;
	int			stack_size;

	arg = argv_to_arr(--argc, argv);
	//добавить проверку на валидность
	stack = ft_create_new_stack(arg[--argc]);
	stack_size = 1;
	while (argc--)
		ft_add_new_elem(&stack, arg[argc], &stack_size);
	ft_set_position(stack, stack_size, arg);
	// ft_stack_print(stack, stack_size);
}
