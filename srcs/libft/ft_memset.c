/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 19:54:12 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/09 11:26:34 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*a;

	if (len == 0)
		return (b);
	a = (unsigned char *)b;
	while (len)
	{
		len--;
		*a = (unsigned char)c;
		if (len)
			a++;
	}
	return (b);
}
