// #include "push_swap.h"
#include <stdio.h>

int	is_numbers(char *s)
{
	while (*s != '\0')
	{
		if (!((*s >= '0' && *s <= '9') || *s == ' '))
			return (0);
		s++;
	}
	return (1);
}

int valid_arg(int argc, char **argv, int *res)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		if (!(is_numbers(argv[i])))
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	int *res;
	printf("%d\n", valid_arg(argc, argv, res));
}