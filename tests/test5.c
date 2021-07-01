/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test5.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/06 16:58:45 by avan-dam      #+#    #+#                 */
/*   Updated: 2021/07/01 12:13:13 by ambervandam   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../get_next_line.h"


int		main(void)
{
	int		fd;
	char	*line;

	fd = open("tests/test.txt", O_RDONLY);
	while (get_next_line(fd, &line) != 0)
		printf("line: [%s]\n", line);	
	close(fd);
	return (0);
}
