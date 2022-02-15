/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:46:06 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:46:08 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	gen_len(char const *s, unsigned int start, unsigned int len)
{
	if ((unsigned int)ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!(s))
		return (NULL);
	len = gen_len(s, start, len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
