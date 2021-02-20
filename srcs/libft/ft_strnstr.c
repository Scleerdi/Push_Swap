/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/01 12:39:16 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/14 15:59:46 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needlelen;
	size_t		i;
	char		*str;

	str = NULL;
	i = 0;
	needlelen = ft_strlen(needle);
	if (haystack == 0)
		*str = '\0';
	if (!needle)
		return (NULL);
	if ((needle[0]) == '\0')
		return ((char*)haystack);
	while ((i + needlelen - 1) < len && haystack[i] != '\0')
	{
		if (ft_strnequ(&haystack[i], needle, needlelen))
			return ((char*)&haystack[i]);
		i++;
	}
	return (0);
}
