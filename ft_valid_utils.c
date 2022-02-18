/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oem <oem@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:55:11 by oem               #+#    #+#             */
/*   Updated: 2022/02/18 06:42:36 by oem              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_numbers(char *s)
{
	while (*s != '\0')
	{
		if (!((*s >= '0' && *s <= '9') || *s == ' ' || *s == '-'))
			return (0);
		s++;
	}
	return (1);
}

int is_only_numbers(char *s)
{
	if (*s == '+' || *s == '-')
		s++;
	while (*s != '\0')
	{
		if (!(*s >= '0' && *s <= '9'))
			return (0);
		s++;
	}
	return (1);
}

void	free_split(char **arr)
{
	char	**buf;
	char	**start;

	start = arr;
	while (*arr)
	{
		buf = arr + 1;
		free(*arr);
		arr = buf;
	}
	free(start);
}

int	find_double(int *arr, int size)
{
	int	i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size - 1)
			if (arr[i] == arr[++j])
				return (1);
		i++;
	}
	return (0);
}
