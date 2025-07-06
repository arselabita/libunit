/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:30:41 by abita             #+#    #+#             */
/*   Updated: 2025/07/06 17:31:11 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# define TEST_SUCCESS 0
# define TEST_FAILURE -1

# include "../../framework/libunit.h"
# include "../../libft/libft.h"
# include "../../printf/ft_printf.h"
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int	printf_basic_test(void);
int	printf_launcher(void);
int	printf_s_test(void);

#endif
