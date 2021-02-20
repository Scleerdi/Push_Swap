/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 16:20:26 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/05 18:03:53 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char		*a;
	unsigned char			*b;
	size_t					i;

	a = (const unsigned char*)src;
	b = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		if (b[i] == (unsigned char)c)
			return (&(dst[i + 1]));
		else
			i++;
	}
	return (NULL);
}
