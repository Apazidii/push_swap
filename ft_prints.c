#include "push_swap.h"

void	ft_stack_print(t_stack *stack, int stack_size, char c)
{
	if (stack_size != 0)
	{
		printf("--------------------\n");
		printf("Stack in %c\n", c);
		printf("Stack value: %d\n", stack->value);
		printf("Stack->next value: %d\n", stack->next->value);
		printf("Stack->prev value: %d\n", stack->prev->value);
		printf("Stack->pos value: %d\n", stack->position);
		printf("--------------------\n");
		ft_stack_print(stack->next, stack_size -1, c);
	}
}

void	ft_base_print(t_base *base)
{
	printf("############################## Stack A ##############################\n");
	printf("size = %d\n", base->size_a);
	ft_stack_print(base->a, base->size_a, 'A');
	printf("############################## Stack B ##############################\n");
	printf("size = %d\n", base->size_b);
	ft_stack_print(base->b, base->size_b, 'B');
}