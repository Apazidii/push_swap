#include "../push_swap.h"

void	ft_ra(t_base *base)
{
	if (base->size_a <= 1)
		return ;
	base->a = base->a->next;
}