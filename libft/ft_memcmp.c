/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:01 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:02 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (*src1 != *src2)
			return (*src1 - *src2);
		src1++;
		src2++;
		i++;
	}
	return (0);
}
