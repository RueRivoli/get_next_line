/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 15:15:33 by fgallois          #+#    #+#             */
/*   Updated: 2017/02/14 18:26:56 by fgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE	8

typedef struct s_line
{
	int fd;
	char *line;
	struct s_line *next;
}	t_line;

int		get_next_line(int fd, char **line);

#endif


