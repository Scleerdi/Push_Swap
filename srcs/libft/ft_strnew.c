/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/28 18:45:37 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/29 14:44:28 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	while (size != 0)
	{
		str[size] = '\0';
		size--;
	}
	str[size] = '\0';
	return (str);
}
