/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:37:03 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/18 18:37:06 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(unsigned int n, unsigned int m)
{
	void	*p;

	p = malloc(n * m);
	if (!p)
		return (NULL);
	p = ft_bzero(p, n * m);
	return (p);
}
