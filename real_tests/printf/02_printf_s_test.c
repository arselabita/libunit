/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_printf_s_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:28:38 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 18:08:23 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_s_test(void)
{
	char	*str;
	char	buffer[100];
	int		pipe_fd[2];
	int		saved_stdout;

	str = "Hello, World!";
	buffer[100] = {0};
	pipe(pipe_fd);
	saved_stdout = dup(STDOUT_FILENO);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(pipe_fd[1]);
	ft_printf("%s", str);
	fflush(stdout);
	dup2(saved_stdout, STDOUT_FILENO);
	close(saved_stdout);
	read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	close(pipe_fd[0]);
	if (strcmp(buffer, str) == 0)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
