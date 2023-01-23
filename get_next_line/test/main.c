/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbui <thbui@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:33:13 by thbui             #+#    #+#             */
/*   Updated: 2023/01/23 13:30:19 by thbui            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include "../get_next_line.c"
#include "../get_next_line_utils.c"
#include <stdio.h>
#include <fcntl.h>

// int	main()			//for stdin
// {
// 	printf("%s", get_next_line(0));
// 	return (0);
// }

int main()
{
	int fd2 = open("files/4_newlines", O_RDONLY);
	int fd3 = open("files/41_char", O_RDONLY);
	int fd4 = open("files/alphabet", O_RDONLY);
	int fd5 = open("files/empty_file", O_RDONLY);
	int fd6 = open("files/empty_lines", O_RDONLY);
	int fd7 = open("files/huge_file", O_RDONLY);
	int fd8 = open("files/huge_line", O_RDONLY);
	char	*l[7];

	int fd = open("files/1_newline", O_RDONLY);
	printf("file1:%s", get_next_line(fd));
	close(fd);
	printf("%c", '\n');

	while((l[0] = get_next_line(fd2)) != NULL)
		printf("file2:%s",l[0]);
	free(l[0]);
	close(fd2);
	printf("%c", '\n');

	while((l[1] = get_next_line(fd3)))
		printf("file3:%s",l[1]);
	free(l[1]);
	close(fd3);
	printf("%c", '\n');

	while((l[2] = get_next_line(fd4)))
		printf("file4:%s",l[2]);
	free(l[2]);
	close(fd4);
	printf("%c", '\n');

	while((l[3] = get_next_line(fd5)))
		printf("file5:%s",l[3]);
	free(l[3]);
	close(fd5);
	printf("%c", '\n');

	while((l[4] = get_next_line(fd6)))
		printf("file6:%s",l[4]);
	free(l[4]);
	close(fd6);
	printf("%c", '\n');

	while((l[5] = get_next_line(fd7)))
		printf("file7:%s",l[5]);
	free(l[5]);
	close(fd7);
	printf("%c", '\n');

	while((l[6] = get_next_line(fd8)))
		printf("file8:%s",l[6]);
	free(l[6]);
	close(fd8);
	return (0);
}
