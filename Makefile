NAME 		= 	push_swap
CC 		= 	cc
HEAD		=	push_swap.h
CFLAGS 		= 	-Wall -Werror -Wextra -g
SRC 		= 	main.c \
				rotations.c \
				manage_list.c \
				reverse_rotate.c \
				algo.c \
				utils.c 
OBJ 		= 	$(SRC:%.c=%.o)

all: 			$(NAME)

$(NAME): 		$(SRC) $(OBJ) $(HEAD)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c		$(HEAD) Makefile
				$(CC) $(CFLAGS) -c $< -o $@
clean:
				rm -f $(OBJ) $(OBJ_BONUS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:				all clean fclean re
