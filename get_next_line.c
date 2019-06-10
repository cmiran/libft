/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 18:55:01 by cmiran            #+#    #+#             */
/*   Updated: 2019/06/10 12:31:46 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_fd(char **list, const int fd)
{
	char	*tmp;
	int	index;
	int	len;

	if (!(list[fd]) && (!(list[fd] = ft_strnew(BUFF_SIZE))))
		return (-1);
	else if (ft_strchr(list[fd], '\n') || ft_strchr(list[fd], '\0'))
	{
		tmp = list[fd];
		index = ft_strclen(list[fd], '\n');
		len = ft_strlen(list[fd]) - index;
		if (!(list[fd] = ft_strsub(list[fd], index + 1, len)))
			return (-1);
		ft_strdel(&tmp);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*list[OPEN_MAX];
	int			ret;
	char		buf[BUFF_SIZE + 1];
	char		*tmp;

	if (BUFF_SIZE < 1 || fd < 0 || line == NULL || read(fd, NULL, 0))
		return (-1);
	else if (!get_fd(list, fd))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		tmp = list[fd];
		if (!(list[fd] = ft_strjoin(list[fd], buf)))
			return (-1);
		ft_strdel(&tmp);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (!list[fd][0] || !(*line = ft_strcdup(list[fd], '\n')))
	{
		/*list[fd][0] ? */ft_strdel(&list[fd])/* : 0*/;
		return (-1);
	}
	return (1);
}
