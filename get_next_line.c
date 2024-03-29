/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 18:44:54 by migmoren          #+#    #+#             */
/*   Updated: 2023/05/29 11:46:13 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_buffer(char *buffer, int fd)	// SE ESTÁ ESCRIBIENDO MAL EN BUFFER POR ALGUN MOTIV ME VOY A SUICIDAR
{
	char	*aux;
	int		i;

	if (!buffer || (buffer && ft_strchr (buffer, '\n')))
		return (buffer);
	aux = (char *)ft_calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!aux)
		return (NULL);
	i = 1;
	while (i != 0)
	{
		i = read(fd, aux, BUFFER_SIZE);
		if (i == -1)
		{
			free(buffer);
			free(aux);
			return (NULL);
		}
		aux[i] = '\0';
		buffer = ft_strjoin(buffer, aux);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(aux);
	return (buffer);
}

char	*get_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	line = (char *)ft_calloc(sizeof(char), (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n' && buffer[i])
		line[i] = buffer[i];
	return (line);
}

char	*get_clean_buffer(char *buffer)
{
	char	*trash;
	int		l_line;
	int		l_trash;

	l_line = 0;
	l_trash = 0;
	while (buffer[l_line] != '\n' && buffer[l_line] != '\0')
		l_line++;
	if (!buffer[l_line])
	{
		free (buffer);
		return (NULL);
	}
	l_line++;
	trash = (char *)malloc(sizeof(char) * (ft_strlen(buffer) - l_line + 1));
	if (!trash)
	{
		free (buffer);
		return (NULL);
	}
	while (buffer[l_line])
		trash[l_trash++] = buffer[l_line++];
	trash[l_trash] = '\0';
	free (buffer);
	return (trash);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;
	
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (NULL);
	if (!buffer)
		buffer = (char *)ft_calloc(sizeof(char), 1);
	buffer = get_buffer(buffer, fd);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	buffer = get_clean_buffer(buffer);
	return (line);
}