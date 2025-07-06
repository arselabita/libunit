/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_sigpipe_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:05:14 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:05:15 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	sigpipe_test(void)
{
	int		pipefd[2];
	char	*message;

	message = "Hello, World!";
	if (pipe(pipefd) == -1)
		return (-1);
	close(pipefd[0]);
	write(pipefd[1], message, 13);
	return (TEST_SUCCESS);
}
