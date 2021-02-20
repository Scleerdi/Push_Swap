/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isspace.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/05 17:15:53 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/05 17:21:53 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' ||
	c == '\f' || c == '\r' || c == ' ');
}
