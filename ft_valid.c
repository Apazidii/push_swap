#include "push_swap.h"

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

int valid_arg(int argc, char **argv)
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

int agr_to_arr(int argc, char **argv, int *res)
{
	char **arr;
	int i;

	if (!(valid_arg(argc, argv)))
		error_exit("Error");
	i = 1;
	arr = (char **)malloc(sizeof(char *) * (argc - 1));
}