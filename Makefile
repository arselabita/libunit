
all:
	cd libft && make bonus
	cd printf && make

clean:
	cd libft && make clean
	cd printf && make clean

fclean:
	cd libft && make fclean
	cd printf && make fclean

re: fclean
	cd libft && make re_bonus
	cd printf && make re

.PHONY: all clean fclean re