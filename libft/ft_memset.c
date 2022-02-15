/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:08 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:11 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = destination;
	while (i < n)
	{
		*p = c;
		p++;
		i++;
	}
	return (destination);
}
