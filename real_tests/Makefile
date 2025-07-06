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
	  printf/02_printf_s_test.c \
	  atoi/00_launcher.c \
	  atoi/01_basic_test.c \
	  isalpha/00_launcher.c \
	  isalpha/01_basic_test.c \
	  isalpha/02_non_alpha_test.c \
	  isalpha/03_number_input_test.c\
	  isdigit/00_launcher.c \
	  isdigit/01_basic_test.c \
	  isdigit/02_alpha_input_test.c\
	  isdigit/03_non_number_test.c\
	  tolower/00_launcher.c\
	  tolower/01_basic_test.c\
	  tolower/02_symbol_test.c\
	  tolower/03_lowercase_test.c\
	  tolower/04_digit_test.c\
	  toupper/00_launcher.c\
	  toupper/01_basic_test.c\
	  toupper/02_symbol_test.c\
	  toupper/03_uppercase_test.c\
	  toupper/04_digit_test.c\
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

real-tests: all
	./libunit


.PHONY: all bonus clean fclean re re_bonus


