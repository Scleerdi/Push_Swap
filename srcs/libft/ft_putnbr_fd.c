/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/25 11:56:27 by scleerdi       #+#    #+#                */
/*   Updated: 2019/03/25 12:40:05 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n += 2000000000;
		n *= -1;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		c = ((n % 10) + 48);
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = n + 48;
		ft_putchar_fd(c, fd);
	}
}
