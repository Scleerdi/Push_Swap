/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 15:41:31 by scleerdi       #+#    #+#                */
/*   Updated: 2019/03/29 16:19:22 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	char		*b;
	size_t		i;

	a = (char*)src;
	b = (char*)dst;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dst);
}
