/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 13:02:08 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/11 15:58:25 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		begin(char const *s)
{
	int		x;

	x = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	return (x);
}

static int		end(char const *s)
{
	int		y;

	y = (int)ft_strlen(s) - 1;
	while (y >= 0 && (s[y] == ' ' || s[y] == '\n' || s[y] == '\t'))
		y--;
	return (y);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		x;
	int		y;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	x = begin(s);
	y = end(s) + 1;
	if (x >= y)
		return (ft_strdup("\0"));
	str = ft_strnew((end(s) - begin(s)) + 1);
	if (!str)
		return (NULL);
	while (x < y && s[x] != '\0')
	{
		str[i] = s[x];
		i++;
		x++;
	}
	str[i] = '\0';
	return (str);
}
