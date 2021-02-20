/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 17:43:32 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/01 20:42:50 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if ((size_t)(ft_strlen((char *)dst)) < size)
		j = (size_t)ft_strlen(dst);
	else
		j = size;
	i = 0;
	while (src[i] != '\0' && (j + i + 1) < size)
	{
		dst[i + j] = src[i];
		i++;
	}
	if (size > j)
		dst[i + j] = '\0';
	if (size < i + j)
		return (size);
	return (j + ft_strlen((char *)src));
}
