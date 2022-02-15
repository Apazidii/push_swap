/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:44 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:46 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
