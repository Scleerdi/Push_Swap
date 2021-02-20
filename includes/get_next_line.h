/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 13:00:40 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/12 13:36:08 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
