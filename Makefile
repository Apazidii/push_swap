NAME = main

SRC =		main.c			ft_stack_utils.c		ft_set_position.c	\
			ft_valid.c		ft_general_utils.c		ft_free_utils.c		\
			ft_prints.c

MOVES =		ft_sa.c		ft_sb.c		ft_ss.c	\
			ft_ra.c		ft_rb.c		ft_rr.c	\
			ft_pa.c		ft_pb.c				\
			ft_rra.c	ft_rrb.c	ft_rrr.c

MOVES_FUNC = $(addprefix moves/, $(MOVES))


SRC += $(MOVES_FUNC)

SRC_O = $(SRC:.c=.o)
LIB = libft/libft.a

CC = cc
CFLAGS = -g

RM = rm

all: $(LIB) $(NAME)

$(LIB):
	make -C ./libft/

clean:
	$(RM) $(SRC_O)
	#make -C ./libft clean
$(NAME): $(SRC_O)
	$(CC) $(CFLAGS) $(SRC_O) $(LIB) -o $(NAME)

fclean: clean
	$(RM) $(NAME)
	#make -C ./libft/ fclean
