/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:16:16 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/28 14:44:29 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// prime fct ----------------------
char	*get_next_line(int fd);

// utils --------------------------
void	get_next_line_utils(void);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int     ft_search(char *str);
char    *ft_search_n(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
