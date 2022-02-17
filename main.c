/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:59:34 by oem               #+#    #+#             */
/*   Updated: 2022/02/16 06:24:51 by oem              ###   ########.fr       */
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

	agr_to_arr(argc, argv, &arg);
	//переделать преобразование в массив со сплитом


	//добавить проверку на валидность
	stack = ft_create_new_stack(arg[--argc]);
	if (!stack)
		error_exit("Error malloc\n");
	base = (t_base *)malloc(sizeof(t_base));
	base->a = stack;
	base->size_b = 0;
	base->size_a = 0;
	while (argc--)
		if (!(ft_create_new_elem(&stack, arg[argc], &base->size_a)))
		{
			ft_free_base(base);
			error_exit("Error malloc\n");
		}
	ft_set_position(stack, base->size_a, arg);

	ft_base_print(base);
}
