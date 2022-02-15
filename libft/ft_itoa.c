/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:23 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:44:24 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	len_num(long int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*cpy_num(long int n, char *s, int l)
{
	int	i;

	i = 0;
	while (i < l)
	{
		s[l - i - 1] = '0' + n % 10;
		n = n / 10;
		i++;
	}
	return (s);
}

static char	*min_i(long int n)
{
	int		l;
	char	*s;

	n = n * -1;
	l = len_num(n);
	s = (char *) malloc(sizeof(char) * l + 2);
	if (!(s))
		return (NULL);
	s[0] = '-';
	cpy_num(n, &s[1], l);
	s[l + 1] = '\0';
	return (s);
}

static char	*plus_i(long int n)
{
	int		l;
	char	*s;

	l = len_num(n);
	s = (char *) malloc(sizeof(char) * l + 1);
	if (!(s))
		return (NULL);
	cpy_num(n, s, l);
	s[l] = '\0';
	return (s);
}

char	*ft_itoa(int num)
{
	long int	n;
	char		*s;

	n = num;
	if (n < 0)
	{
		s = min_i(n);
		if (!(s))
			return (NULL);
	}
	else
	{
		s = plus_i(n);
		if (!(s))
			return (NULL);
	}
	return (s);
}
