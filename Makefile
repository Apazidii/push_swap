NAME = main

SRC =		main.c			ft_stack_utils.c		ft_set_position.c	\
			ft_prints.c		moves/ft_sa.c			moves/ft_sb.c		\
			moves/ft_ss.c	moves/ft_ra.c			moves/ft_pa.c
SRC_O = $(SRC:.c=.o)
LIB = libft/libft.a

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