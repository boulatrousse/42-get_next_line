#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

#define BUFFER_SIZE 5

char	*get_next_line(int fd)
{
	int				j;
	char			buffer[BUFFER_SIZE + 1];
	static char		*stash;
	char			*tmp;

	j = 0;
	stash = "";
	tmp = "";
	while (ft_search(buffer) == 0)
	{
		j = read(fd, buffer, BUFFER_SIZE);
		buffer[j] = '\0';
		stash = ft_strjoin(stash, buffer);
	}   
	stash = ft_search_n(stash);
	return (stash);
}

int main()
{
	int     fd = open("noaapoes.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));

    
	return (0);
}
