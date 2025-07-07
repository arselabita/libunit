/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguliyev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:34:12 by iguliyev          #+#    #+#             */
/*   Updated: 2025/07/06 20:34:15 by iguliyev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../printf/ft_printf.h"

# define TEST_SUCCESS 0
# define TEST_FAILURE -1
# define TEST_UNKNOWN -2
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

typedef struct s_unit_test
{
	char				*fun_name;
	char				*test_name;
	int					(*function)(void);
	struct s_unit_test	*next;
}	t_unit_test;

void	load_tests(t_unit_test **tests, char *fun_name,
			char *test_name, int (*function)(void));
int		launch_tests(t_unit_test **tests);
void	free_tests(t_unit_test **tests);
void	ft_clean(t_unit_test **tests, char *name);
int		ft_print_results(int count, int success, char *fun_name);
void	ft_print_single_result(t_unit_test *test, int i);

#endif
