/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 11:53:09 by scleerdi       #+#    #+#                */
/*   Updated: 2019/09/05 11:55:47 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long		tot;

	i = 0;
	sign = 1;
	tot = 0;
	while (ft_isspace(str[i]))
		i++;
	while ((str[i] == '+' || str[i] == '-') && ft_isdigit(str[i + 1]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (!(ft_isdigit(str[i])))
			return ((int)((long)sign * tot));
		tot = tot * 10 + str[i] - '0';
		i++;
	}
	tot = ((tot > 2147483648) ? -1 : tot * (long)sign);
	tot = ((tot < -2147483649) ? 0 : tot);
	return ((int)tot);
}
