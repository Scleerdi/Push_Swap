/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_puntendl_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/25 13:30:55 by scleerdi       #+#    #+#                */
/*   Updated: 2019/03/25 13:32:37 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd(10, fd);
}
