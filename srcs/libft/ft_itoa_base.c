/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/05 12:03:10 by scleerdi       #+#    #+#                */
/*   Updated: 2019/09/05 12:03:35 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		size_str(intmax_t value, int base)
{
	intmax_t		k;
	int				i;

	i = 0;
	k = value;
	while (k != 0)
	{
		i++;
		k /= base;
	}
	return (i);
}

char	*mem_str(int i)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * i + 1);
	str[i + 1] = '\0';
	return (str);
}

char	convert(intmax_t n)
{
	return ((n < 10) ? n + '0' : n - 10 + 'A');
}

int		handle_neg(intmax_t value, int i, char *str, int base)
{
	if (value == -2147483648 && base == 10)
	{
		i++;
		value = -147483648;
		str[1] = '2';
	}
	(base == 10) ? str[0] = '-' : 0;
	(base == 10) ? i++ : 0;
	value *= -1;
	return (value);
}

char	*ft_itoa_base(intmax_t value, intmax_t base)
{
	intmax_t		n;
	int				i;
	char			*str;

	i = size_str(value, base) - 1;
	str = mem_str(i);
	if (value == 0)
		str[0] = '0';
	if (value < 0)
		value = handle_neg(value, i, str, base);
	while (value != 0)
	{
		n = value % base;
		str[i] = convert(n);
		value /= base;
		i--;
	}
	return (str);
}
