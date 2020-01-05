/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-you <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:22:38 by sael-you          #+#    #+#             */
/*   Updated: 2019/06/14 08:45:30 by saad             ###   ########.fr       */
/*   Updated: 2019/05/02 14:31:50 by sael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		concat_lines(char **s_fd, char **line)
{
	int		index;
	char	*tmp;

	index = 0;
	while ((*s_fd)[index] != '\n' && (*s_fd)[index] != '\0')
		index++;
	if ((*s_fd)[index] == '\n')
	{
		*line = ft_strsub(*s_fd, 0, index);
		tmp = ft_strdup(&((*s_fd)[index + 1]));
		free(*s_fd);
		*s_fd = tmp;
		if ((*s_fd)[0] == '\0')
			ft_strdel(s_fd);
	}
	else
	{
		*line = ft_strdup(*s_fd);
		ft_strdel(s_fd);
	}
	return (1);
}

int		final_check(int fd, int bites_read, char **line, char **s_fd)
{
	if (bites_read < 0)
		return (-1);
	else if (bites_read == 0 && s_fd[fd] == NULL)
		return (0);
	return (concat_lines(&s_fd[fd], line));
}

int		get_next_line(int fd, char **line)
{
	int				bites_read;
<<<<<<< HEAD
	static char			*s_fd[FDS];
	char				*tmp;
	char				buff[BUFF_SIZE + 1];
=======
	static char		*s_fd[FDS];
	char			*tmp;
	char			buff[BUFF_SIZE + 1];
>>>>>>> ff601e6853c6796fc9780453ea39f54a92c846cd

	if (fd < 0 || line == NULL)
		return (-1);
	while ((bites_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bites_read] = '\0';
		if (s_fd[fd] == NULL)
			s_fd[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(s_fd[fd], buff);
			free(s_fd[fd]);
			s_fd[fd] = tmp;
		}
		if (ft_strchr(s_fd[fd], '\n'))
			break ;
	}
	return (final_check(fd, bites_read, line, s_fd));
}
