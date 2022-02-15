#include "../push_swap.h"

void	ft_pa(t_base *base)
{
	t_stack  *buf;

	if (base->size_b == 0)
		return ;
	if (base->size_a != 0)
		ft_add_new_elem(base->a, &base->b, &base->size_b);
	else
		ft_add_new_elem_in_new_stack(base->a, &base->b, &base->size_b);
}