/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/05 11:59:05 by scleerdi       #+#    #+#                */
/*   Updated: 2019/09/05 11:59:15 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

intmax_t		ft_intlen(intmax_t n)
{
	intmax_t		i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
