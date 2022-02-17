#include "../push_swap.h"

void	ft_pa(t_base *base)
{
	t_stack  *buf;
	if (base->size_b == 0)
		return ;
	if (base->size_a != 0)
		ft_add_new_elem(&base->b, &base->a, &base->size_a);
	else
		ft_add_new_elem_in_new_stack(&base->b, &base->a, &base->size_a);
	base->size_b--;
	if (base->size_b == 0)
		base->b = NULL;
}