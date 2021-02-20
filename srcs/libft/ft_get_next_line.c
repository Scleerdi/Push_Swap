/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get_next_line.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/29 13:43:41 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/12 13:40:38 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		last_line(char **buff, char **line, int end)
{
	if (end == 0 && ft_strlen(*buff))
	{
		*line = ft_strdup(*buff);
		ft_strdel(buff);
		return (1);
	}
	else
	{
		*line = ft_strnew(1);
		ft_strdel(buff);
	}
	return (end);
}

static int		spotted(char *spot, char **buff, char **line)
{
	char	*str;

	*spot = '\0';
	*line = ft_strdup(*buff);
	str = ft_strdup(spot + 1);
	ft_strclr(*buff);
	ft_strcpy(*buff, str);
	ft_strdel(&str);
	return (1);
}

static int		reinforce(const int fd, char **buff)
{
	char		*temp;
	char		*temp_buff;
	int			end;

	temp = ft_strnew(BUFF_SIZE);
	end = (int)read(fd, temp, BUFF_SIZE);
	if (end == -1)
		return (-1);
	temp[end] = '\0';
	temp_buff = ft_strjoin(*buff, temp);
	free(*buff);
	free(temp);
	*buff = temp_buff;
	return (end);
}

int				get_next_line(const int fd, char **line)
{
	static char	*buff;
	char		*spot;
	int			end;

	end = 1;
	if (fd < 0)
		return (-1);
	if (buff == NULL)
		buff = ft_strnew(0);
	while (end > 0)
	{
		spot = ft_strchr(buff, '\n');
		if (spot)
			return (spotted(spot, &buff, line));
		end = reinforce(fd, &buff);
		if (end == -1)
			return (-1);
	}
	return (last_line(&buff, line, end));
}
