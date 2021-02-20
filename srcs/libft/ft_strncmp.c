/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 14:28:21 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/05 13:50:01 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		st1;
	unsigned char		st2;

	i = 0;
	st1 = (unsigned char)s1[i];
	st2 = (unsigned char)s2[i];
	if (n == 0)
		return (0);
	while (st1 && st1 == st2 && i < n)
	{
		i++;
		st1 = (unsigned char)s1[i];
		st2 = (unsigned char)s2[i];
	}
	if (i < n)
		return (st1 - st2);
	return (0);
}
