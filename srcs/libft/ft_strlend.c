/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlend.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 11:01:47 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/17 11:06:56 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlend(const char *str, const int fd)
{
	size_t i;
	size_t f;

	i = 0;
	f = (size_t)fd;
	while (i <= f)
		i++;
	return (i);
}
