/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:57:03 by yasadki           #+#    #+#             */
/*   Updated: 2024/03/07 16:19:04 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

void	*ft_calloc(size_t count, size_t size);
char	*get_next_line(int fd);
char	*ft_strjoin(char *line, char *buffer);
size_t	ft_strlen(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t len);
char	*ft_strchr(const char *str, int c);

#endif