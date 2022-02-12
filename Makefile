NAME = run

SRC = main.c		ft_stack_utils.c		ft_set_position.c
SRC_O = $(SRC:.c=.o)
LIB = libft.a

CC = cc
CFLAGS = -g

RM = rm

all: $(NAME)



clean:
	$(RM) $(SRC_O)

$(NAME): $(SRC_O)
	$(CC) $(CFLAGS) $(SRC_O) $(LIB) -o $(NAME)

fclean: clean
	$(RM) $(NAME)