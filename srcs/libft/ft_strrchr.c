/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 12:06:41 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/01 16:56:29 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*x;

	i = 0;
	x = NULL;
	while (s[i])
	{
		if (s[i] == c)
			x = (char*)&s[i];
		i++;
	}
	if (s[i] == c)
		x = (char*)&s[i];
	return (x);
}
