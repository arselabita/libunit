#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <signal.h>
# include <fcntl.h>
# include <time.h>
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
void	ft_clean(t_unit_test **tests, int log_fd, char *name);
char	*generate_log_filename(const char *fun_name, t_unit_test **tests);
int		open_log_file(char *fun_name, t_unit_test **tests);
int		ft_print_results(int count, int success, char *fun_name, int log_fd);
void	ft_print_single_result(t_unit_test *test, int log_fd, int i);

#endif