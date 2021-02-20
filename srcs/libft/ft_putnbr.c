/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 15:58:18 by scleerdi       #+#    #+#                */
/*   Updated: 2019/03/25 12:43:44 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n += 2000000000;
		n *= -1;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		c = ((n % 10) + 48);
		ft_putnbr(n / 10);
		ft_putchar(c);
	}
	else
	{
		c = n + 48;
		ft_putchar(c);
	}
}
