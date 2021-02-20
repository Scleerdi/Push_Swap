/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error_delete_all.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/10 17:53:19 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 16:23:08 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Frees allocated memory and prints error in case of invalid input
*/

int			error_delete_all(t_stacks *ab)
{
	del_stacks(&ab->a, &ab->b);
	ft_putendl("Error");
	return (1);
}
