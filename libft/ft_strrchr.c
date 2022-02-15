/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:57 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:58 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	*k;
	char	*s;

	s = (char *)str;
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			k = &s[i];
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (k);
}
