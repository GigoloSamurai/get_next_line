/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasadki <yasadki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:28:36 by yasadki           #+#    #+#             */
/*   Updated: 2024/03/11 07:53:52 by yasadki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	i;

	i = 0;
	tab = malloc(nmemb * size);
	if (!tab)
		return (0);
	while (i < nmemb * size)
		((char *) tab)[i++] = 0;
	return (tab);
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{			
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *line, char *buffer)
{
	char	*full_line;
	int		len_line;
	int		len_buffer;

	if (!line)
		line = (char *)ft_calloc(1, sizeof(char));
	if (!line || !buffer)
		return (NULL);
	len_line = ft_strlen(line);
	len_buffer = ft_strlen(buffer);
	full_line = (char *)ft_calloc(len_line + len_buffer + 1, sizeof(char));
	if (!full_line)
	{
		free(line);
		return (NULL);
	}
	ft_memmove(full_line, line, len_line);
	ft_memmove(full_line + len_line, buffer, len_buffer + 1);
	free(line);
	return (full_line);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		len = len_s - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_memmove(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
