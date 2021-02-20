/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 18:58:00 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/06 15:05:23 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nextchain;

	lst = *alst;
	while (lst != NULL)
	{
		nextchain = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nextchain;
	}
	*alst = NULL;
}
