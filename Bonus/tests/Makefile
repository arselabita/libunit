CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS_BONUS = -Wall -Wextra -Werror

SRC = main.c \
	  00_launcher.c \
	  01_ok_test.c \
	  02_sigsegv_test.c \
	  03_ko_test.c \
	  04_sigbus_test.c \
	  05_sigfpe_test.c \
	  06_sigill_test.c \
	  07_sigpipe_test.c \
	  08_sigabrt_test.c \
	  09_sigalrm_test.c

OBJ = $(SRC:.c=.o)
NAME = libunit
PRINTF = ../printf/libftprintf.a
LIBFT = ../libft/libft.a
FRAMEWORK = ../framework/libunit.a

all: $(NAME)

$(NAME): $(OBJ) $(FRAMEWORK) $(PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(FRAMEWORK) $(PRINTF) $(LIBFT)

$(PRINTF):
	make -C ../printf

$(LIBFT):
	make -C ../libft

$(FRAMEWORK):
	make -C ../framework

clean:
	rm -f $(OBJ) $(OBJ_BONUS)
	make -C ../framework clean
	make -C ../printf clean
	make -C ../libft clean

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	make -C ../framework fclean
	make -C ../printf fclean
	make -C ../libft fclean

re: fclean all

test: all
	./$(NAME)

.PHONY: all bonus clean fclean re test


