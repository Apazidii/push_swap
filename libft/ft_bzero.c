/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:36:23 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/18 18:36:26 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *destination, unsigned int n)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = destination;
	while (i < n)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (destination);
}
