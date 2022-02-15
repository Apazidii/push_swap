/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:06 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:07 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, void *source, unsigned int n)
{
	unsigned int	i;

	if (n == 0 || destination == source)
		return (destination);
	if (source >= destination)
	{
		i = 0;
		while (i < n)
		{
			((char *)destination)[i] = ((char *)source)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((char *)destination)[i] = ((char *)source)[i];
		}
	}
	return (destination);
}
