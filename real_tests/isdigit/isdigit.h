#ifndef ISDIGIT_H
#define ISDIGIT_H

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

#define TEST_SUCCESS 0
#define TEST_FAILURE -1

int isdigit_launcher(void);
int isdigit_basic_test(void);
int alpha_input_test(void);
int non_number_input_test(void);

#endif