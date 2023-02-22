/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:24:37 by beroux            #+#    #+#             */
/*   Updated: 2023/01/14 11:25:46 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

size_t	ft_strlen_g(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin_gnl(char *prec, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (!prec)
	{
		prec = malloc(sizeof(char));
		*prec = 0;
	}
	if (!prec || !buffer)
		return (NULL);
	res = malloc((ft_strlen_g(prec) + ft_strlen_g(buffer) + 2) * sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	if (prec)
		while (prec[++i])
			res[i] = prec[i];
	while (buffer[j])
		res[i++] = buffer[j++];
	res[i] = 0;
	free(prec);
	return (res);
}

char	*find_newline(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == '\n')
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}

char	*ft_extract_line(char *prec)
{
	size_t	i;
	char	*line;

	if (!(*prec))
		return (NULL);
	i = 0;
	while (prec[i] && prec[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof (char));
	if (!line)
		return (NULL);
	i = 0;
	while (prec[i] && prec[i] != '\n')
	{
		line[i] = prec[i];
		i++;
	}
	if (prec[i] == '\n')
	{
		line[i] = prec[i];
		i++;
	}
	line[i] = 0;
	return (line);
}

char	*save_after_new_line(char *prec)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	while (prec[i] && prec[i] != '\n')
		i++;
	if (!(*(prec + i)))
	{
		free(prec);
		return (NULL);
	}
	res = malloc((ft_strlen_g(prec) - i + 1) * sizeof (char));
	if (!res)
		return (NULL);
	i++;
	j = 0;
	while (prec[i])
		res[j++] = prec[i++];
	res[j] = 0;
	free(prec);
	return (res);
}
