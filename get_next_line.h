/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:16:16 by lboulatr          #+#    #+#             */
/*   Updated: 2022/12/02 12:47:27 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

char	*get_next_line(int fd);
void	ft_cut_buffer(char *str);
void	*ft_free(char *str);
int		ft_strchr_n(char *str);
int		ft_strlen(char *str);
int		ft_strlen_bis(char *str);
char	*ft_strjoin_bis(char *s1, char *s2);

#endif
