/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <dgalactu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:53:22 by dgalactu          #+#    #+#             */
/*   Updated: 2022/02/18 09:11:47 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_arg(int argc, char **argv)
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

char	*strj(char *s1, char *s2)
{
	char	*res;
	int		l;
	int		i;

	l = ft_strlen(s1) + ft_strlen(s2) + 2;
	res = (char *)malloc(sizeof(char) * l);
	i = 0;
	l = 0;
	while (s1[l] != '\0')
		res[i++] = s1[l++];
	l = 0;
	res[i++] = ' ';
	while (s2[l] != '\0')
		res[i++] = s2[l++];
	res[i] = '\0';
	free(s1);
	return (res);
}

static int	*atoi_arr(char **arr, int *argc)
{
	int	i;
	int	j;
	int	*res;
	int	f;

	i = 0;
	j = 0;
	while (arr[i] != NULL)
		i++;
	res = (int *) malloc(sizeof(int) * i);
	if (!res)
		return (NULL);
	while (j < i)
	{
		res[j] = ft_atoi_int(arr[j], &f);
		if (!f || !is_only_numbers(arr[j]))
		{
			free(res);
			free_split(arr);
			error_exit("Error\n");
		}
		j++;
	}
	*argc = i;
	return (res);
}

static int	str_to_intarr(char *str, int **res, int *argc)
{
	char	**arr;

	arr = ft_split(str, ' ');
	if (!arr)
	{
		free(str);
		return (0);
	}
	free(str);
	*res = atoi_arr(arr, argc);
	free_split(arr);
	if (!(*res))
		return (0);
	if (find_double(*res, *argc))
	{
		free(*res);
		error_exit("Error\n");
	}
	return (1);
}

int	agr_to_arr(int *argc, char **argv, int **res)
{
	int		i;
	char	*str;

	if (!(valid_arg(*argc, argv)))
		error_exit("Error\n");
	str = ft_strdup(argv[1]);
	i = 2;
	while (i < *argc)
	{
		str = strj(str, argv[i++]);
		if (!str)
			return (0);
	}
	return (str_to_intarr(str, res, argc));
}
