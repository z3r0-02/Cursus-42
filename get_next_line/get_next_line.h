/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:28:34 by thbui             #+#    #+#             */
/*   Updated: 2023/01/23 00:44:18 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <sys/types.h>

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);

#endif