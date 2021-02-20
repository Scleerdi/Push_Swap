/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printstacks.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 15:26:42 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 15:26:43 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_list(t_stack *stack)
{
	t_stack *current;

	current = stack;
	if (!stack)
		return ;
	while (current != NULL)
	{
		ft_putnbr(current->data);
		ft_putchar('\n');
		current = current->next;
	}
	ft_putchar('\n');
}

/*
** Print stacks for debug purposes
*/

void		printstacks(t_stack *a, t_stack *b)
{
	ft_putstr("stack A:\n");
	print_list(a);
	ft_putstr("stack B:\n");
	print_list(b);
}
