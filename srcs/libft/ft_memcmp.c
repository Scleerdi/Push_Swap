/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 12:50:07 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/10 14:16:49 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*st1;
	unsigned char		*st2;

	if ((int)n <= 0)
		return (0);
	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	i = 0;
	while (st1[i] == st2[i] && i + 1 < n)
		i++;
	if (i < n)
		return (st1[i] - st2[i]);
	return (0);
}
