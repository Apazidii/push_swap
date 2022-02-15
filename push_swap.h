/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:58:05 by oem               #+#    #+#             */
/*   Updated: 2022/02/15 03:25:56 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				value;
	int 			position;
}			t_stack;

typedef struct	s_base
{
	struct s_stack	*a;
	struct s_stack	*b;
	int				size_a;
	int				size_b;
}		t_base;

t_stack	*ft_create_new_stack(int value);
t_stack	*ft_add_new_elem(t_stack **stack, t_stack *new, int *stack_size);
t_stack	*ft_create_new_elem(t_stack **stack, int value, int *stack_size);
void	ft_set_position(t_stack *stack, int stack_size, int *arg);

//prints
void	ft_base_print(t_base *base);
void	ft_stack_print(t_stack *stack, int stack_size, char c);

//moves
void	ft_sa(t_base *base);
void	ft_sb(t_base *base);
void	ft_ss(t_base *base);
void	ft_pa(t_base *base)
void	ft_ra(t_base *base);

#endif