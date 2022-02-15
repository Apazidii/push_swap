#include "../push_swap.h"

void	ft_rrb(t_base *base)
{
	if (base->size_b <= 1)
		return ;
	base->b = base->b->prev;
}