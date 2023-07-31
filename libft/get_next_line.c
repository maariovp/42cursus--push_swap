/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <jcapistr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:57:05 by jcapistr          #+#    #+#             */
/*   Updated: 2022/12/03 10:57:05 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	buffer = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read_fd(fd, &buffer);
	if (buffer == NULL)
		return (NULL);
	line = ft_get_line(buffer);
	ft_buffer_move(&buffer);
	if (buffer[0] == '\0')
		free(buffer);
	return (line);
}
