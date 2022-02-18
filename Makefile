NAME = push_swap

SRC =		main.c				ft_stack_utils.c		ft_set_position.c	\
			ft_valid.c			ft_valid_utils.c		ft_valid_atoi.c		\
			ft_general_utils.c	ft_free_utils.c			ft_prints.c

SORT =		get_sort.c			sort_two.c			sort_three.c	\
			sort_four.c			sort_five.c			sort_many.c

MOVES =		ft_sa.c		ft_sb.c		ft_ss.c	\
			ft_ra.c		ft_rb.c		ft_rr.c	\
			ft_pa.c		ft_pb.c				\
			ft_rra.c	ft_rrb.c	ft_rrr.c

MOVES_FUNC = $(addprefix moves/, $(MOVES))

SRC += $(addprefix sort/, $(SORT))
SRC += $(MOVES_FUNC)

SRC_O = $(SRC:.c=.o)
LIB = libft/libft.a

CC = cc
CFLAGS = -g

RM = rm

all: $(LIB) $(NAME)

#$(LIB):
#	make -C ./libft/

libre:
	make -C ./libft re
	make -C ./libft clean

clean:
	$(RM) $(SRC_O)
	#make -C ./libft clean
$(NAME): $(SRC_O)
	$(CC) $(CFLAGS) $(SRC_O) $(LIB) -o $(NAME)

re: fclean all

fclean: clean
	$(RM) $(NAME)
	#make -C ./libft/ fclean
