/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:42:04 by yasadki           #+#    #+#             */
/*   Updated: 2024/02/29 12:27:46 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
  int    fd;
  char  *next_line;
  int  count;

  count = 0;
  fd = open("example.txt", O_RDONLY);
  while (1)
  {
    next_line = get_next_line(fd);
    if (next_line == NULL)
      break ;
    count++;
    printf("[%d]:%s\n", count, next_line);
    next_line = NULL;
  }
  close(fd);
  return (0);
}
