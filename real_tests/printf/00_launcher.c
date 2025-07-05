#include "printf.h"

int printf_launcher(void)
{
	// write(1, "Launching printf tests...\n", 26);
	t_unit_test *printf_testlist;
	ft_bzero(&printf_testlist, sizeof(t_unit_test *));
	load_tests(&printf_testlist, "Printf Basic test", &printf_basic_test);
	load_tests(&printf_testlist, "Printf Char test", &printf_char_test);
	load_tests(&printf_testlist, "Printf Digit test", &printf_digit_test);
	load_tests(&printf_testlist, "Printf Integer test", &printf_int_test);
	load_tests(&printf_testlist, "Printf Hexadecimal Upper test", &printf_hex_u_test);
	load_tests(&printf_testlist, "Printf Hexadecimal Lower test", &printf_hex_l_test);
	load_tests(&printf_testlist, "Printf Unsigned Int test", &printf_u_int_test);
	load_tests(&printf_testlist, "Printf Percentage test", &printf_percentage_test);
	load_tests(&printf_testlist, "Printf Pointer test", &printf_pointer_test);
	load_tests(&printf_testlist, "Printf Null test", &printf_null_test);
	load_tests(&printf_testlist, "Printf Invalid Format Specifier test", &printf_invalid_test);
	load_tests(&printf_testlist, "Printf Multiple Format Specifier test", &printf_multiple_test);
	return(launch_tests(&printf_testlist));
}