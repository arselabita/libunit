/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_printf_basic_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:25:38 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:27:58 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf_basic_test(void)
{
	char	*str;
	int		expected_length;
	int		actual_length;
	int		saved_stdout;
	int		null_fd;

	str = "Hello, World!";
	expected_length = 13;
	actual_length = 0;
	null_fd = open("/dev/null", O_WRONLY);
	saved_stdout = dup(STDOUT_FILENO);
	dup2(null_fd, STDOUT_FILENO);
	close(null_fd);
	actual_length = ft_printf("%s", str);
	dup2(saved_stdout, STDOUT_FILENO);
	close(saved_stdout);
	if (actual_length == expected_length)
		return (TEST_SUCCESS);
	else
		return (TEST_FAILURE);
}
