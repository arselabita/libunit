#ifndef ISALPHA_H
#define ISALPHA_H

#include "../../libft/libft.h"
#include "../../framework/libunit.h"

#define TEST_SUCCESS 0
#define TEST_FAILURE -1

int isalpha_launcher(void);
int isalpha_basic_test(void);
int isalpha_non_alpha_test(void);
int number_input_test(void);

#endif