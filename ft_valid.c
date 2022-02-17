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

char *str_join(char *s1, char *s2)
{
	char *str;
	char *res;

	str = ft_strjoin(s1, " ");
	res = ft_strjoin(str, s2);
	if (!(str && res))
		return (NULL);
	free(str);
	return (res);
}

int *atoi_arr(char **arr)
{
	int i;
	int j;
	int *res;

	i = 0;
	j = 0;
	while(arr[i] != NULL)
		i++;
	res = (int *) malloc(sizeof(int) * i);
	if (!res)
		return (NULL);
	while (j < i)
	{
		res[j] = ft_atoi(arr[j]);
		j++;
	}
	return (res);
}

void free_split(char **arr)
{
	char **buf;

	while (*arr)
	{
		buf = arr + 1;
		free(arr);
		arr = buf;
	}
}

int agr_to_arr(int argc, char **argv, int **res)
{
	int		i;
	char	*str;
	char	**arr;

	if (!(valid_arg(argc, argv)))
		error_exit("Error\n");
	str = argv[1];
	i = 2;
	while (i < argc)
	{
		str = str_join(str, argv[i++]);
		if (!str)
			return (0);
	}
	arr = ft_split(str, ' ');
	if (!arr)
	{
		free(str);
		return (0);
	}
	free(str);
	*res = atoi_arr(arr);
	if (!(*res))
	{
		free_split(arr);
		return (0);
	}
	return (1);
}
