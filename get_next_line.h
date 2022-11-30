/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:16:16 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/30 12:31:16 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// prime fct ----------------------
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);

// utils --------------------------
void	get_next_line_utils(void);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_surplus(char *str);
char	*ft_cutline(char *str);
int	    ft_search(char *str);

#endif
