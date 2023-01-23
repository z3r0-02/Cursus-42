/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:33:13 by thbui             #+#    #+#             */
/*   Updated: 2023/01/23 13:30:38 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line_bonus.h"
#include "../get_next_line_bonus.c"
#include "../get_next_line_utils_bonus.c"
#include <stdio.h>
#include <fcntl.h>

// int	main()			//for stdin
// {
// 	printf("%s", get_next_line(0));
// 	return (0);
// }

int	main()		//prints from 2 textfiles in rotation
{
	int fd;
	int fd2;

	fd = open("files/one", O_RDONLY);
	fd2 = open("files/two", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd2));

	close(fd);
	close(fd2);
    return (0);
}
