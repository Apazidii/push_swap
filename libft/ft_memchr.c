/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:44:58 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:00 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*src;

	src = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*src == (unsigned char)c)
			return ((void *) src);
		src++;
		i++;
	}
	return (0);
}
