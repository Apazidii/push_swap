NAME = push_swap
NAME_BONUS = checker

GNL =		get_next_line_bonus.c		get_next_line_utils_bonus.c
GNL_FUNC = $(addprefix get_next_line/, $(GNL))

BONUS_F = 	checker.c				commands.c
BONUS_FUNC = $(addprefix bonus/, $(BONUS_F))

BONUS_FUNC += $(GNL_FUNC)
BONUS_FUNC += $(filter-out push_swap.c, $(SRC))

SRC =		push_swap.c			ft_stack_utils.c		ft_set_position.c	\
			ft_valid.c			ft_valid_utils.c		ft_valid_atoi.c		\
			ft_general_utils.c	ft_free_utils.c

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
BONUS_O = $(BONUS_FUNC:.c=.o)
LIB = libft/libft.a

CC = cc
CFLAGS = -g

RM = rm

all: $(LIB) $(NAME)

bonus: $(LIB) $(NAME_BONUS)

$(LIB):
	make -C ./libft/

libre:
	make -C ./libft re
	make -C ./libft clean

$(NAME): $(SRC_O)
	$(CC) $(CFLAGS) $(SRC_O) $(LIB) -o $(NAME)

$(NAME_BONUS): $(BONUS_O)
	$(CC) $(CFLAGS) $(BONUS_O) $(LIB) -o $(NAME_BONUS)

clean:
	$(RM) $(SRC_O) $(filter-out $(SRC_O), $(BONUS_O))
	make -C ./libft clean

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)
	make -C ./libft/ fclean
