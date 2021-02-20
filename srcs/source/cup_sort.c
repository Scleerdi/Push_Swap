/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cup_sort.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/05 12:44:59 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/13 15:43:20 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	prepares stack A for reinsertion of integers of stack B
**	pushes stack B back onto stack A
**	Finalizes Stack A
*/

void	stir(t_stacks *ab)
{
	if (ab->size_a == 2 && ab->a->data < ab->a->next->data)
		execute(ab, e_sa);
	if (ab->size_b == 2 && ab->b->data < ab->b->next->data)
		execute(ab, e_sb);
	while (ab->b)
		execute(ab, e_pa);
	execute(ab, e_rra);
}

/*
**	sorts stack B in reverse when stack Bs size is 3
*/

void	teacup(t_stacks *ab)
{
	if (ab->b->data > ab->b->next->data &&
		ab->b->data < ab->b->next->next->data &&
		ab->b->next->data < ab->b->next->next->data)
	{
		execute(ab, e_rb);
	}
	else if (ab->b->data < ab->b->next->data &&
		ab->b->data > ab->b->next->next->data &&
		ab->b->next->data > ab->b->next->next->data)
	{
		execute(ab, e_sb);
	}
	else if (ab->b->data < ab->b->next->data &&
		ab->b->data < ab->b->next->next->data &&
		ab->b->next->data < ab->b->next->next->data)
	{
		execute(ab, e_rrb);
	}
	else if (ab->b->data < ab->b->next->data &&
		ab->b->data < ab->b->next->next->data &&
		ab->b->next->data > ab->b->next->next->data)
	{
		execute(ab, e_rb);
	}
	stir(ab);
}

/*
**	discerns the highest and lowest ints on stack A
**	pushes remaining nodes to stack B
*/

void	boil_sort(t_stacks *ab)
{
	t_stacks	dup_ab;
	t_stacks	hold_ab;

	dup_stack(ab, &dup_ab);
	hold_ab = dup_ab;
	while (dup_ab.a)
	{
		if (dup_ab.a->data > ab->lead_a)
			ab->lead_a = dup_ab.a->data;
		if (dup_ab.a->data < ab->lead_b)
			ab->lead_b = dup_ab.a->data;
		dup_ab.a = dup_ab.a->next;
	}
	del_stacks(&hold_ab.a, &hold_ab.b);
	while (ab->size_a > 2)
	{
		if (ab->a->data == ab->lead_a || ab->a->data == ab->lead_b)
			execute(ab, e_ra);
		else if (ab->size_b == 2 && ab->b->data < ab->b->next->data)
			execute(ab, e_sb);
		else
			execute(ab, e_pb);
	}
	if (ab->size_b == 3)
		teacup(ab);
}

/*
**	sorts stack A if it doesnt have more then 3 integers
*/

void	shot_sort(t_stacks *ab)
{
	if (ab->a->data > ab->a->next->data && ab->a->data < ab->a->next->next->data
		&& ab->a->next->data < ab->a->next->next->data)
		execute(ab, e_sa);
	else if (ab->a->data < ab->a->next->data &&
	ab->a->data > ab->a->next->next->data &&
	ab->a->next->data > ab->a->next->next->data)
		execute(ab, e_rra);
	else if (ab->a->data > ab->a->next->data &&
	ab->a->data > ab->a->next->next->data &&
	ab->a->next->data > ab->a->next->next->data)
	{
		execute(ab, e_ra);
		execute(ab, e_sa);
	}
	else if (ab->a->data < ab->a->next->data &&
	ab->a->data < ab->a->next->next->data &&
	ab->a->next->data > ab->a->next->next->data)
	{
		execute(ab, e_sa);
		execute(ab, e_ra);
	}
	else if (ab->a->data > ab->a->next->data &&
	ab->a->data > ab->a->next->next->data &&
	ab->a->next->data < ab->a->next->next->data)
		execute(ab, e_ra);
}

/*
**	picks an apropriate course of action
*/

void	cup_sort(t_stacks *ab)
{
	ab->lead_a = ab->a->data;
	ab->lead_b = ab->a->data;
	if (ab->size_a == 2 && ab->a->data > ab->a->next->data)
		execute(ab, e_sa);
	else if (ab->size_a == 3)
		shot_sort(ab);
	else
		boil_sort(ab);
	if (ab->size_a == 2 && ab->size_b)
		stir(ab);
}
