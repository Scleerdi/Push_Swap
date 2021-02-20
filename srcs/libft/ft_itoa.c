/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 14:06:16 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/06 15:25:51 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int x;

	x = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		x++;
	}
	while (n > 0)
	{
		n /= 10;
		x++;
	}
	return (x);
}

char		*ft_itoa(int n)
{
	int		l;
	char	*str;

	l = length(n);
	str = ft_strnew(l);
	if (!str)
		return (NULL);
	str[l] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		l--;
		str[l] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
