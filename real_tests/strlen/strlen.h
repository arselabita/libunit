#ifndef STRLEN_H
#define STRLEN_H

#include "../../framework/libunit.h"
#include "../../libft/libft.h"
#include <string.h>

#define TEST_SUCCESS 0
#define TEST_FAILURE -1

int basic_test(void);
int null_test(void);
int bigger_str_test(void);
int strlen_launcher(void);

#endif