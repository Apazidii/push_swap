/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:51 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:52 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*res;

	if (!(s && f))
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * l + 1);
	if (!(res))
		return (NULL);
	res[l] = '\0';
	while (i < l)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
