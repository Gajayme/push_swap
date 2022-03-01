#NAMES
NAME		= push_swap
NAME_BON	= checker

#COMP
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

#LIBFT
LIBFT_DIR	= libft
LIBFT_MAKE	= cd $(LIBFT_DIR) && make all && make bonus
LIBFT_INC	= -L $(LIBFT_DIR) -lft


#SRC
SRC_DIR		= src
SRC			= $(SRC_DIR)/main.c \
			$(SRC_DIR)/exit.c \
			$(SRC_DIR)/parser.c \
			$(SRC_DIR)/utils.c \
			$(SRC_DIR)/quick_sort.c \
			$(SRC_DIR)/algorithm.c\
			$(SRC_DIR)/list_utils.c \
			$(SRC_DIR)/swap.c \
			$(SRC_DIR)/push.c \
			$(SRC_DIR)/rotate.c \
			$(SRC_DIR)/reverse_rotate.c \
			$(SRC_DIR)/if_sorted.c \
			$(SRC_DIR)/scoring.c \
			$(SRC_DIR)/rotate_opt.c \
			$(SRC_DIR)/move.c \
			$(SRC_DIR)/extra_funks.c \

SRC_BON_DIR		= src_bonus
SRC_BON			= $(SRC_BON_DIR)/main_bonus.c \
			$(SRC_BON_DIR)/exit_bonus.c \
			$(SRC_BON_DIR)/parser_bonus.c \
			$(SRC_BON_DIR)/utils_bonus.c \
			$(SRC_BON_DIR)/algorithm_bonus.c\
			$(SRC_BON_DIR)/list_utils_bonus.c \
			$(SRC_BON_DIR)/swap_bonus.c \
			$(SRC_BON_DIR)/push_bonus.c \
			$(SRC_BON_DIR)/rotate_bonus.c \
			$(SRC_BON_DIR)/reverse_rotate_bonus.c \
			$(SRC_BON_DIR)/if_sorted_bonus.c \
			$(SRC_BON_DIR)/extra_funks_bonus.c \
			$(SRC_BON_DIR)/get_next_line_bonus.c \
			$(SRC_BON_DIR)/get_next_line_utils_bonus.c \

#INC
INC_DIR		= inc
INC			= $(INC_DIR)/push_swap.h

INC_BON_DIR		= inc_bonus
INC_BON			= $(INC_BON_DIR)/push_swap_bonus.h

#OBJ
OBJ_DIR		= obj
OBJ			= $(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC:.c=.o))

OBJ_BON_DIR		= obj_bonus
OBJ_BON			= $(patsubst $(SRC_BON_DIR)%, $(OBJ_BON_DIR)%, $(SRC_BON:.c=.o))

#RMS
RM_DIR		= rm -rf
RM_FILE		= rm -f

#DEPS
$(NAME): $(OBJ) $(INC)
	$(LIBFT_MAKE)
	$(CC) $(OBJ) $(LIBFT_INC) -o $(NAME)

$(NAME_BON): $(OBJ_BON) $(INC_BON)
	$(LIBFT_MAKE)
	$(CC) $(OBJ_BON) $(LIBFT_INC) -o $(NAME_BON)

#OBJ DEPS
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

$(OBJ): $(INC)	| $(OBJ_DIR)

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)


$(OBJ_BON_DIR)/%.o: $(SRC_BON_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_BON)

$(OBJ_BON): $(INC_BON)	| $(OBJ_BON_DIR)

$(OBJ_BON_DIR):
			mkdir -p $(OBJ_BON_DIR)


#RULES
all:	$(NAME)

bonus: $(NAME_BON)


clean:
		${RM_DIR} ${OBJ_DIR}
		${RM_DIR} ${OBJ_BON_DIR}
		cd $(LIBFT_DIR) && make clean


fclean:	clean
		${RM_FILE} $(NAME)
		${RM_FILE} $(NAME_BON)
		cd $(LIBFT_DIR) && make fclean

re:		fclean all

#OTHER
.PHONY: all clean fclean re bonus
