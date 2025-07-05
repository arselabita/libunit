CC = cc

CFLAGS = -Wall -Werror -Wextra

CFILES = main.c\
		framework/load_test.c
		framework/launch_tests.c
		tests/strlen/00_launcher.c

OFILES = $(CFILES:.c=.o)

NAME = libunit.a

all: $(NAME)

$(NAME): $(OFILES)
		ar rcs $(NAME) $(OFILES)

clean:
		rm -f $(OFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re