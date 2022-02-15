/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgalactu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:21 by dgalactu          #+#    #+#             */
/*   Updated: 2021/10/15 15:45:23 by dgalactu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	func(long int n, int fd)
{
	char	c;

	if (n >= 10)
		func(n / 10, fd);
	c = '0' + (n % 10);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = num * -1;
		write(fd, "-", 1);
	}
	func(num, fd);
}
