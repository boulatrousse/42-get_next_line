/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:28:36 by lboulatr          #+#    #+#             */
/*   Updated: 2022/11/25 15:40:03 by lboulatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

#define BUFFER_SIZE 50

// char *get_next_line(int fd)
// {
    
// }




int main()
{
    char    *buffer[BUFFER_SIZE + 1];
    int x = open("colorado.txt", O_RDONLY);
    read(x, buffer, BUFFER_SIZE);
    printf("%s\n", buffer);
    
}

//O_RDONLY