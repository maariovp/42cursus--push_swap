/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <jcapistr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 10:57:13 by jcapistr          #+#    #+#             */
/*   Updated: 2022/12/03 10:57:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_buffer_join(char **buffer, char *new)
{
	char	*tmp;

	if (*buffer == NULL)
	{
		*buffer = (char *)ft_calloc(sizeof(char), 1);
		if (*buffer == NULL)
		{
			free(new);
			exit(EXIT_FAILURE);
		}
	}
	tmp = (char *)ft_calloc(sizeof(char), (ft_strlen(*buffer) + ft_strlen(new)
				+ 1));
	if (tmp == NULL)
	{
		free(new);
		free(*buffer);
		exit(EXIT_FAILURE);
	}
	ft_memcpy(tmp, *buffer, ft_strlen(*buffer));
	ft_memcpy(tmp + ft_strlen(*buffer), new, ft_strlen(new));
	free(*buffer);
	*buffer = tmp;
}

void	ft_read_fd(int fd, char **buffer)
{
	char	*new;
	ssize_t	bytes;

	new = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (new == NULL)
	{
		free(*buffer);
		exit(EXIT_FAILURE);
	}
	bytes = 42;
	while (ft_strchr(*buffer, '\n') == NULL && bytes != 0)
	{
		bytes = read(fd, new, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(new);
			free(*buffer);
			exit(EXIT_FAILURE);
		}
		ft_buffer_join(buffer, new);
	}
	free(new);
}

char	*ft_get_line(const char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (buffer[i] == '\0')
		return (NULL);
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = (char *)malloc((i + 1) * sizeof(char));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

void	ft_buffer_move(char **buffer)
{
	char	*new;
	int		i;

	i = 0;
	while ((*buffer)[i] != '\0' && (*buffer)[i] != '\n')
		i++;
	if ((*buffer)[i] == '\0')
		return ;
	new = (char *)ft_calloc(sizeof(char), (ft_strlen(*buffer) - i + 1));
	if (new == NULL)
	{
		free(*buffer);
		exit(EXIT_FAILURE);
	}
	i++;
	ft_memcpy(new, *buffer + i, ft_strlen(*buffer) - i);
	free(*buffer);
	*buffer = new;
}
