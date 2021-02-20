/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 16:29:25 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/12 15:48:24 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	link = (t_list *)malloc(sizeof(t_list));
	if (!link)
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		link->content = ft_memalloc(content_size);
		if (link->content == NULL)
		{
			free(link);
			return (NULL);
		}
		link->content = ft_memcpy((link->content), content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
