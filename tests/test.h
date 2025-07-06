#ifndef TEST_H
#define TEST_H

#include "../framework/libunit.h"
#include "../libft/libft.h"
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
# include <sys/mman.h>
# include <limits.h>

int OK_test(void);
int KO_test(void);
int SIGSEGV_test(void);
int SIGBUS_test(void);
int SIGFPE_test(void);
int SIGILL_test(void);
int SIGPIPE_test(void);
int SIGABRT_test(void);
int test_launcher(void);
int sigalrm_test(void);

#endif