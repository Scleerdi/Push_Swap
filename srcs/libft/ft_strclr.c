/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 16:43:31 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/10 11:44:09 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
