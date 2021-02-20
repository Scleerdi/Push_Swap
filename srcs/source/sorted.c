/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorted.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/03 14:08:31 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 16:18:09 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Runs final checkups on stacks A and B
*/

int		sorted(t_stacks *ab)
{
	if (ab->b != NULL || stack_sorted(&ab->a) == 0)
		return (0);
	return (1);
}
