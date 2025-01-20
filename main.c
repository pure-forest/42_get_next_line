/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeng <ydeng@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 15:55:20 by ydeng             #+#    #+#             */
/*   Updated: 2025/01/20 19:36:15 by ydeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <fcntl.h>
# include <stdio.h>
int main()
{

	int		fd;
	char	*line;
	int		index;

	index = 0;
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("[loop %d]:%s", index, line);
	free(line);
	line = NULL;
	index++;
	line = get_next_line(fd);
	printf("[loop %d]:%s", index, line);
	free(line);
	line = NULL;
	// index++;
	// line = get_next_line(fd);
	// printf("[loop %d]:%s", index, line);
	free(line);
	// line = NULL;index++;
	// line = get_next_line(fd);
	// printf("[loop %d]:%s", index, line);
	// free(line);
	// line = NULL;
	// index++;
	// line = get_next_line(fd);
	// printf("[loop %d]:%s", index, line);
	// free(line);
	// line = NULL;
	// while(1)
	// {
	// 	line = get_next_line(fd);
	// 	printf("[loop %d]:%s", index, line);
	// 	free(line);
	// 	index++;
	// 	if (line == NULL)
	// 		break;
	// }
	close(fd);
}
