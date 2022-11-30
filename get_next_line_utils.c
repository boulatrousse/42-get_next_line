/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:33 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/30 13:50:02 by lboulatr         ###   ########.fr       */
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
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return (NULL);
	dest = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!dest)
		return (NULL);
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

char	*ft_strdup(const char *s1)
{
	size_t		i;
	size_t		j;
	char		*s2;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1) + 1;
	j = 0;
	s2 = malloc(i * sizeof(char));
	if (!s2)
		return (NULL);
	while (j < i)
	{
		s2[j] = ((char)s1[j]);
		j++;
	}
	s2[i - 1] = '\0';
	return (s2);
}

char	*ft_surplus(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (&str[i + 1]);
}

char	*ft_cutline(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	str[i + 1] = '\0';
	return (str);
}

int	ft_search(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}