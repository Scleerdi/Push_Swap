/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/29 17:55:46 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/05 17:59:25 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*backwards(char *a, char *b, size_t len)
{
	while (len > 0)
	{
		len--;
		b[len] = a[len];
	}
	return (b);
}

static char		*forwards(char *a, char *b, size_t i, size_t len)
{
	while (i < len)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*a;
	char			*b;
	size_t			i;

	a = (char*)src;
	b = (char*)dst;
	i = 0;
	if (a < b)
	{
		b = backwards(a, b, len);
	}
	else
	{
		b = forwards(a, b, i, len);
	}
	return (b);
}
