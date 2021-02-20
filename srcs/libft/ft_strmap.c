/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 12:45:07 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/10 14:01:24 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f((char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
