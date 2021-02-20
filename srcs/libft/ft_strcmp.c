/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/24 17:13:58 by scleerdi       #+#    #+#                */
/*   Updated: 2019/04/09 16:05:44 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	unsigned char		*st1;
	unsigned char		*st2;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	i = 0;
	while (st1[i] == st2[i] && st1[i] != '\0')
		i++;
	return (st1[i] - st2[i]);
}
