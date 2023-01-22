/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:29:29 by thbui             #+#    #+#             */
/*   Updated: 2023/01/23 00:39:51 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_allocate_next(char *str)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')			//counts the first line till '\n' or '\0'
		i++;
	if (!str[i])								//if you end at '\0'
	{
		free(str);
		return (NULL);
	}
	ptr = (char *)malloc((ft_strlen(str) + 1 - i) * sizeof(char));	//allocates memory - the line that is to be returned
	if (!ptr)
		return (NULL);
	i++;
	while (str[i])
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	free(str);
	return (ptr);
}

char	*ft_get_line(char *str)
{
	int	i;
	char	*the_line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')			//to get the size needed for malloc
		i++;
	the_line = malloc(sizeof(char) * (i + 2));	// + 2 for '\n' and '\0'
	if (!the_line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')			//copy into the_line until '\n'
	{
		the_line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')							//adds '\n' to the string if there is one
		the_line[i] = str[i];
	the_line[++i] = '\0';						//ends the string
	return (the_line);
}

char *get_next_line(int fd)
{
	static char *str;
	char		*buffer;
	char		*line;
	int			bytes_read;

	// if (fd < 0 || BUFFER_SIZE <= 0)
	// 	return (0);
	buffer = malloc (sizeof(char) * BUFFER_SIZE + 1);	//BUFFER_SIZE will be declared in the test
	if (!buffer)
		return (NULL);
	bytes_read = 1;										//starting with value 1
	while (bytes_read != 0 && !ft_strchr(str, '\n'))	//after the first loop, we need to check if '\n' was already read,
	{													//if not the loop continues
		bytes_read = read(fd, buffer, BUFFER_SIZE); 	//returns a number of bytes read and saves it to *buffer
		if (bytes_read == -1)							//if there is an error while reading the file descriptor
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	line = ft_get_line(str);							//get's one line, from str
	str = ft_allocate_next(str);						//allocates the memory for next string, if the function is called again
	return (line);
}