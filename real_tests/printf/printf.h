#ifndef PRINTF_H
#define PRINTF_H

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include "../../printf/ft_printf.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define TEST_SUCCESS 0
#define TEST_FAILURE -1


int printf_basic_test(void);
int printf_launcher(void);
int printf_s_test(void);

#endif