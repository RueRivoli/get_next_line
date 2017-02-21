/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 15:15:33 by fgallois          #+#    #+#             */
/*   Updated: 2017/02/20 17:04:14 by fgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/libft.h"
# define EOL '\n'
# include <sys/uio.h>
# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define BUFF_SIZE 1

typedef struct		s_line
{
	int				fd;
	char			*line;
	struct s_line	*next;
}					t_line;

int					get_next_line(int fd, char **line);

#endif
