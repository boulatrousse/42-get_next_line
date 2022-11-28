/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:33 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/28 14:37:32 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	int		k;
	char	*dest;

	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (dest == NULL)
		return (0);
	while (s1[j])
	{
		dest[j] = s1[j];
		j++;
	}
	while (s2[k])
		dest[j++] = s2[k++];
	dest[j] = '\0';
	return (dest);
}

int ft_search(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\n')
            return (-1);
        i++;
    }
    return (0);
}

char    *ft_search_n(char *str)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\n')
        {
            str[i + 1] = '\0';
            return (str);
        }
        i++;
    }
    return (str);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}