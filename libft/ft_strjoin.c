/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:39 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:41 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*cpys(char const *s, char *p)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		*p = s[i];
		p++;
		i++;
	}
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	char	*p;
	char	*res;

	if (!(s1 && s2))
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * k + 1);
	if (!res)
		return (NULL);
	p = res;
	p = cpys(s1, p);
	p = cpys(s2, p);
	res[k] = '\0';
	return (res);
}
