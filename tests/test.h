/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:11:45 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 16:11:52 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../framework/libunit.h"
# include "../libft/libft.h"
# include <string.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/mman.h>
# include <limits.h>

int	ok_test(void);
int	ko_test(void);
int	sigsegv_test(void);
int	sigbus_test(void);
int	sigfpe_test(void);
int	sigill_test(void);
int	sigpipe_test(void);
int	sigabrt_test(void);
int	test_launcher(void);
int	sigalrm_test(void);

#endif
