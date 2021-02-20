/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 19:25:58 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/06 14:58:08 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *list;

	if (lst == NULL)
		return (NULL);
	new = f(lst);
	list = new;
	while (lst->next != NULL)
	{
		new->next = f(lst->next);
		if (!(new->next || new))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	if (lst == NULL)
		return (NULL);
	else
		return (list);
}
