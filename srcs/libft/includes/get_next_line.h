/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: scleerdi <scleerdi@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 13:00:40 by scleerdi       #+#    #+#                */
/*   Updated: 2020/02/07 15:55:40 by scleerdi      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 16

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
