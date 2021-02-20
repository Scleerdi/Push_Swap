/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/05 12:05:15 by scleerdi       #+#    #+#                */
/*   Updated: 2019/09/05 12:35:59 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int j;

	i = 1;
	if (nb < 1)
		return (0);
	if (nb % 2 == 0)
		i++;
	while (i <= nb / 2)
	{
		j = i * i;
		if (j >= 2147483646 || j > nb)
			return (0);
		if (j == nb)
			return (i);
		else if (j > nb)
			return (i - 1);
		i += 2;
	}
	return (0);
}
