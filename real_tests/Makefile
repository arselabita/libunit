CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS_BONUS = -Wall -Wextra -Werror

SRC = main.c \
	  strlen/00_launcher.c \
	  strlen/01_basic_test.c \
	  strlen/02_null_test.c \
	  strlen/03_bigger_str_test.c \
	  printf/00_launcher.c \
	  printf/01_printf_basic_test.c \
	  printf/02_printf_char_test.c \
	  printf/03_printf_digit_test.c \
	  printf/04_printf_int_test.c \
	  printf/05_printf_hex_u_test.c \
	  printf/06_printf_hex_l_test.c \
	  printf/07_printf_u_int_test.c \
	  printf/08_printf_percentage_test.c \
	  printf/09_printf_pointer_test.c \
	  printf/10_printf_null_test.c \
	  printf/11_printf_invalid_test.c \
	  printf/12_printf_multiple_test.c \
	  ../framework/free_tests.c \
	  ../framework/load_tests.c \
	  ../framework/launch_tests.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)
NAME = libunit
NAME_BONUS = libunit_bonus
PRINTF = ../printf/libftprintf.a
LIBFT = ../libft/libft.a

all: $(NAME)

bonus: $(NAME_BONUS)

$(NAME): $(OBJ) $(PRINTF) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(PRINTF) $(LIBFT)

$(NAME_BONUS): $(OBJ_BONUS) $(PRINTF) $(LIBFT)
	$(CC) $(CFLAGS_BONUS) -o $(NAME_BONUS) $(OBJ_BONUS) $(PRINTF) $(LIBFT)

$(PRINTF):
	make -C ../printf

$(LIBFT):
	make -C ../libft

clean:
	rm -f $(OBJ) $(OBJ_BONUS)
	make -C ../printf clean
	make -C ../libft clean

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	make -C ../printf fclean
	make -C ../libft fclean

re: fclean
	make all

re_bonus: fclean
	make bonus

test: all
	# ./$(NAME) > result.txt
	# diff result.txt expected.txt

.PHONY: all bonus clean fclean re re_bonus


