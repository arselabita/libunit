CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = free_tests.c \
	  load_tests.c \
	  launch_tests.c \
	  utils.c \

OBJ = $(SRC:.c=.o)
NAME = libunit

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean
	make all

.PHONY: all clean fclean re