##
## EPITECH PROJECT, 2019
## Makefile project
## File description:
## Makefile
##

SRC	=	src/str_to_array.c	\
		src/find_str.c	\
		src/directions.c	\
		src/cut_my_board.c	\
		src/left_or_right.c	\
		src/avoid_crash.c	\
		src/car_simulation.c	\
		src/check_point.c	\
		src/create_ai_struct.c	\
		src/start_end.c

LIB	=	lib/my_display.c	\
		lib/my_printf.c	\
		lib/my_tools.c	\
		lib/my_cpy_fct.c

MAIN	=	src/main.c

CFLAGS	=	-g -I./include

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o) $(LIB:.c=.o)

NAME	=	ai

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

tests_run:
	@rm -f *.gcda *.gcno
	gcc -o unit_tests $(SRC) $(LIB) tests/*.c tests/tests_lib/*.c $(CFLAGS) --coverage -lcriterion
	./unit_tests
	rm -f unit_tests
	rm -f test_*

coverage:
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

clean:
	rm -f $(OBJ)
	@rm -f *.gc*

fclean:	clean
	rm -f $(NAME)

re: fclean all