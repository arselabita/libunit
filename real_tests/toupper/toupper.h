#ifndef TOUPPER_H
#define TOUPPER_H

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

#define TEST_SUCCESS 0
#define TEST_FAILURE -1

int toupper_launcher(void);
int toupper_basic_test(void);
int toupper_symbol_test(void);
int toupper_uppercase_test(void);
int toupper_digit_test(void);

#endif