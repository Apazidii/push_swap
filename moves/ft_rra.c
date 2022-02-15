#include "../push_swap.h"

void	ft_rra(t_base *base)
{
	if (base->size_a <= 1)
		return ;
	base->a = base->a->prev;
}