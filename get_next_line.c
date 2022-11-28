/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:36 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/28 15:11:32 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 5

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1) + 1;
	s2 = malloc(i * sizeof(char));
	if (s2 == NULL)
		return (0);
	ft_memcpy(s2, s1, i);
	s2[i - 1] = '\0';
	return (s2);
}

char    *ft_cut_line(char *str)
{
    size_t  i;

    i = 0;
    while (str[i] != '\n')
        i++;
    return (&str[i]);
}

char    *get_next_line(int fd)
{
    size_t          i;
    char            buffer[BUFFER_SIZE + 1];
    static char     *stash;
    static char     *surplus;

    stash = "";
    surplus = "";
    while (ft_search(buffer) == 0)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        buffer[i] = '\0';
        stash = ft_strjoin(stash, buffer);
    }
    surplus = ft_strdup(stash);
    surplus = ft_cut_line(surplus);
    printf("stash = %s\n", stash);
    printf("surplus = %s\n", surplus);
    
    //stash = ft_search_n(stash);
    return (stash);
}

int main()
{
	int     fd = open("noaapoes.txt", O_RDONLY);
    printf("1 : %s\n", get_next_line(fd));
    printf("2 : %s\n", get_next_line(fd));

    
	return (0);
}
