/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartyn- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 19:45:06 by jmartyn-          #+#    #+#             */
/*   Updated: 2019/01/18 20:53:47 by jmartyn-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <fcntl.h>
#include <stdio.h>

int		get_next_line(const int fd, char **line)
{
	static char	*c[2147483647];
	char		buffer[BUFF_SIZE + 1];
	char		*tempo;
	long		ret;
	int			endl;

	if (fd < 0 || (!c[fd] && !(c[fd] = ft_strnew(1))) || !line)
		return (-1);
	while (!ft_strchr(c[fd], '\n') && (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		tempo = c[fd];
		buffer[ret] = '\0';
		c[fd] = ft_strjoin(c[fd], buffer);
		ft_strdel(&tempo);
	}
	if (ret == -1 || !*(tempo = c[fd]))
		return (ret == -1 ? -1 : 0);
	if ((endl = (ft_strchr(c[fd], '\n') > 0)))
		*line = ft_strsub(c[fd], 0, ft_strchr(c[fd], '\n') - c[fd]);
	else
		*line = ft_strdup(c[fd]);
	c[fd] = ft_strsub(c[fd], (unsigned int)(ft_strlen(*line) + endl),
			(size_t)(ft_strlen(c[fd]) - (ft_strlen(*line) + endl)));
	ft_strdel(&tempo);
	return (!(!c[fd] && !ft_strlen(*line)));
}
