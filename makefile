NAME			=		push_swap
LIBFT_PATH		=		libft/
LIBFT			=		$(LIBFT_PATH)libft.a
SRC_PATH		=		src/
SRC 			= 		sort_push_swap.c \
						create_lists.c \
						parsing.c \
						push.c \
						rev_rotate.c \
						rotate.c \
						swap.c \
						utils.c \
						utils_for_sorting.c \
						check_arrays.c	\
OBJ 			=		$(SRCS:%.c=%.o)
CFLAGS 			= 		-Wall -Wextra -Werror
CC				=		gcc

all 			: 		$(LIBFT) $(NAME)

$(LIBFT)		:
						make -s -C $(LIBFT_PATH)

$(NAME)		 	:		$(OBJ)
						$(CC) $(CFLAGS) $(LIBFT) $(OBJ) -o $(NAME)

%.o 			: 		%.c
						$(CC) $(CFLAGS) -c $< -o $@

clean 			: 
						@make -s -C $(LIBFT_PATH) clean
						@rm -f $(OBJ)

fclean 			: 		clean
						@make -s -C $(LIBFT_PATH) fclean
						@rm -f $(NAME)

re 				: 		fclean all

.PHONY			: 		all clean fclean re