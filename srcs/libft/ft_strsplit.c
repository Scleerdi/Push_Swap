/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 18:07:25 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/10 14:04:40 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		locate(char const *s, char c, int i)
{
	int j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static int		count(char const *s, char c)
{
	int		x;
	int		i;

	x = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			x++;
		i++;
	}
	return (x);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		y;
	char	*str;
	char	**sv;

	if (!s)
		return (NULL);
	i = 0;
	y = 0;
	sv = (char**)malloc(sizeof(str) * count(s, c) + 1);
	if (!sv)
		return (NULL);
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			str = ft_strsub(s, i, locate(s, c, i));
			sv[y] = str;
			y++;
		}
		i++;
	}
	sv[y] = NULL;
	return (sv);
}
