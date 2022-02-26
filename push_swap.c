#include "push_swap.h"

static void	add_all_args(t_base *base, int *arg, int argc)
{
	while (argc--)
	{
		if (!(ft_create_new_elem(&base->a, arg[argc], &base->size_a)))
		{
			ft_free_base(base);
			free(arg);
			error_exit("Error malloc\n");
		}
	}
}

static void	is_sort(int *arg, int size)
{
	int	i;

	if (size <= 1)
	{
		free(arg);
		exit(0);
	}
	i = 1;
	while (i < size)
	{
		if (arg[i - 1] > arg[i])
			return ;
		i++;
	}
	free(arg);
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_base		*base;
	int			*arg;

	if (argc < 2)
		exit(0);
	if (!agr_to_arr(&argc, argv, &arg))
		error_exit("Error malloc\n");
	is_sort(arg, argc);
	base = (t_base *)malloc(sizeof(t_base));
	if (!base)
		error_exit("Error malloc\n");
	base->size_b = 0;
	base->size_a = 1;
	base->a = ft_create_new_stack(arg[--argc]);
	if (!base->a)
	{
		free(base);
		error_exit("Error malloc\n");
	}
	add_all_args(base, arg, argc);
	ft_set_position(base->a, base->size_a, arg);
	get_sort(base);
	free(arg);
	ft_free_base(base);
	return (0);
}
