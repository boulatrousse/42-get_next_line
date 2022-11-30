/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:36 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/30 14:06:21 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 3

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
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
			return (&s[i]);
		else
			i++;
	}
	if ((str[i] == '\0') && (b == '\0'))
		return (&s[i]);
	else
		return (NULL);
}

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*tmp;
	static char	*stash;
	char	*line;
	int		byte;

	byte = 0;
	if (!stash)
		stash = ft_strdup("");
	while (ft_strchr(buffer, '\n') == NULL)
	{
		byte = read(fd, buffer, BUFFER_SIZE);
		buffer[byte] = '\0';
		tmp = stash;
		line = ft_strjoin(tmp, buffer);
	}

	return (line);
}

int main()
{
	int x = open("noaapoes.txt", O_RDONLY);
	printf("1 : %s", get_next_line(x));
	printf("2 : %s", get_next_line(x));
	printf("3 : %s\n", get_next_line(x));


	return 0;
}