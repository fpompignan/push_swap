
NAME = push_swap

SRC = 	main.c			\
		utils.c			\
		check_1.c		\
		raddix_1.c		\
		raddix_2.c		\
		small_stack.c	

FILEO = $(SRC:.c=.o)

HEADER = ft_push_swap.h

WWW = -Wall -Werror -Wextra

all: $(NAME)


OBJ: $(SRC)
	gcc $(WWW) -c $(SRC) 

$(NAME): OBJ
		gcc $(WWW) -o $(NAME) $(FILEO)
clean:
	rm -f $(FILEO) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re bonus
