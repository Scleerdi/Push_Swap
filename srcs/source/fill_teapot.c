/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_teapot.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/03 14:34:42 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 16:22:04 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	discerns the best rotating direction based on the rotation count
**		and relative stack sizes of A and B
*/

static void	optimize(t_pot *pot, t_stacks *ab)
{
	while (pot)
	{
		if (pot->rot_a > ab->size_a / 2)
			pot->rot_a -= ab->size_a;
		else if (pot->rot_b > ab->size_b / 2)
			pot->rot_b -= ab->size_b;
		pot = pot->next;
	}
}

/*
**	Looks for Data on stack A which is smaller then the ab->b->data
**		and bigger then ab->b->next->data
**	Saves the rotation count and the integer in question
*/

static int	run_water(t_pot **pot, t_stack *a, int b_data, int b_next_data)
{
	int high;
	int low;

	low = ft_min(b_data, b_next_data);
	high = ft_max(b_data, b_next_data);
	while (a)
	{
		if (a->data < high && a->data > low)
		{
			save_teapot(pot, (*pot)->rot_a, (*pot)->rot_b);
			if (!pot)
				return (0);
		}
		a = a->next;
		(*pot)->rot_a++;
	}
	return (1);
}

/*
**	Frees Temporary variable
*/

static void	clean_placeholder_tea(t_pot **pot)
{
	t_pot *tmp;

	tmp = *pot;
	*pot = (*pot)->next;
	ft_bzero(tmp, sizeof(t_pot));
	free(tmp);
}

/*
** Creates the t_pot linked list
** Calls function which calculates the amount of operations on each stack
**		till the next push
*/

t_pot		*fill_teapot(t_stacks *ab)
{
	t_pot		*pot;
	t_stack		*stack_b;

	stack_b = ab->b;
	pot = NULL;
	if (!stack_b)
		return (NULL);
	save_teapot(&pot, 0, 0);
	if (!pot)
		return (NULL);
	while (stack_b->next)
	{
		if (stack_b->next->data != ab->lead_b)
			run_water(&pot, ab->a, stack_b->data, stack_b->next->data);
		stack_b = stack_b->next;
		pot->rot_b++;
		pot->rot_a = 0;
	}
	if (ab->b->data != ab->lead_b)
		run_water(&pot, ab->a, ab->b->data, stack_b->data);
	clean_placeholder_tea(&pot);
	optimize(pot, ab);
	return (pot);
}
