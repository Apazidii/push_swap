#include "push_swap.h"

void	error_exit(char *s)
{
	while(*s != '\0')
		write(1, s, 1);
	exit(0);
}

