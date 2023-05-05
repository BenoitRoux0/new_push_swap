/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroux <beroux@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:24:33 by beroux            #+#    #+#             */
/*   Updated: 2023/03/01 13:32:50 by beroux           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_read_line(int fd, char *prec)
{
	char	*buffer;
	int		ret;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof (char));
	if (!buffer)
		return (NULL);
	ret = 1;
	while (!find_newline(prec) && ret != 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == -1)
		{
			free(buffer);
			free(prec);
			return (NULL);
		}
		buffer[ret] = 0;
		prec = ft_strjoin_gnl(prec, buffer);
		if (!prec)
			return (NULL);
	}
	free(buffer);
	return (prec);
}

char	*get_next_line(int fd)
{
	static char	*prec;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		if (prec)
			free(prec);
		prec = NULL;
		return (NULL);
	}
	prec = ft_read_line(fd, prec);
	if (!prec)
		return (NULL);
	line = ft_extract_line(prec);
	prec = save_after_new_line(prec);
	return (line);
}
