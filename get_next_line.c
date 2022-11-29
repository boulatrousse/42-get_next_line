/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:36 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/29 16:05:17 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

char	*ft_strchr_bis(const char *str, int c)
{
	int			i;
	char		b;
	char		*s;

	i = 0;
	b = c;
	s = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == b)
			return (&s[i + 1]);
		else
			i++;
	}
	if ((str[i] == '\0') && (b == '\0'))
		return (&s[i]);
	else
		return (NULL);
}

char	*ft_cut(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	str[i + 1] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	char			buffer[BUFFER_SIZE + 1];
	char			*line;
	static char		*tmp;
	char			*stash;
	size_t			byte;

	line = "";
	stash = "";
	byte = 1;
	if (read(fd, NULL, 0) == -1 || fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (byte != 0)
	{
		byte = read(fd, buffer, BUFFER_SIZE);
		buffer[byte] = '\0';
		if (ft_search(buffer) == 0)
			stash = ft_strjoin(stash, buffer);
		else
		{
			stash = ft_strjoin(stash, buffer);
			line = ft_cut(ft_strdup(stash));
			if (tmp != NULL)
				line = ft_strjoin(tmp, line);
			tmp = ft_strchr_bis(stash, '\n');
			return (line);
		}
	}
    free(line);
	return (stash);
}
