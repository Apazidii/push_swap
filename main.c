/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:59:34 by oem               #+#    #+#             */
/*   Updated: 2022/02/15 03:08:51 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_argv_to_arr(int size, char *argv[])
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
	t_base		*base;
	int			*arg;
	int			stack_size;

	arg = ft_argv_to_arr(--argc, argv);
	//добавить проверку на валидность
	stack = ft_create_new_stack(arg[--argc]);
	stack_size = 1;
	while (argc--)
		ft_create_new_elem(&stack, arg[argc], &stack_size);
	ft_set_position(stack, stack_size, arg);
	base = (t_base *)malloc(sizeof(t_base));
	base->a = stack;
	base->size_a = stack_size;
	base->size_b = 0;
	ft_sa(base);
	ft_base_print(base);
}
