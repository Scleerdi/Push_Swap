/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/30 12:25:40 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 16:24:46 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	Creates linked list node and assigns it Data
*/

t_stack		*create_node(int data)
{
	t_stack *node;

	node = ft_memalloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
