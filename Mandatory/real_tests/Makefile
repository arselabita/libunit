CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS_BONUS = -Wall -Wextra -Werror

SRC = main.c \
	  strlen/00_launcher.c \
	  strlen/01_basic_test.c \
	  strlen/02_null_test.c \
	  strlen/03_bigger_str_test.c \
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
	  toupper/04_digit_test.c

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

