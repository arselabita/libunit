NAME = libunit.a
SRC = free_tests.c \
	  load_tests.c \
	  launch_tests.c \
	  utils.c 
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?	

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re