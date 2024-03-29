NAME			=		push_swap
SRCS 			= 		sort_push_swap.c \
						create_lists.c \
						parsing.c \
						push.c \
						rev_rotate.c \
						rotate.c \
						swap.c \
						utils.c \
						utils_for_sorting.c \
						check_arrays.c	\
						main.c 
OBJ 			=		$(SRCS:%.c=%.o)
CFLAGS 			= 		-Wall -Wextra -Werror
CC				=		gcc

ANOTHER_SRC		= ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_itoa.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_striteri.c \
				ft_strtrim.c \
				ft_split.c \
				ft_lstadd_front.c \
	  			ft_lstsize.c \
	  			ft_lstlast.c \
	  			ft_lstadd_back.c 

LIBFT_PATH		=		libft/
LIBFT			=		$(LIBFT_PATH)libft.a
LIBFT_SRC = $(addprefix ./libft/, $(ANOTHER_SRC))
LIBFT_HEADER = ./libft/libft.h
LIBFT_OBJS = $(LIBFT_SRC:.c=.o)

all 			: 		$(NAME)

$(LIBFT)		: 		$(LIBFT_SRC) $(LIBFT_HEADER) $(LIBFT_OBJS) 
						make -s -C $(LIBFT_PATH)

$(NAME)		 	:		$(OBJ) $(LIBFT)
						$(CC) $(CFLAGS) $(LIBFT) $(OBJ) -o $(NAME)

%.o 			: 		%.c	makefile 
						$(CC) $(CFLAGS) -c $< -o $@

clean 			: 
						@make -s -C $(LIBFT_PATH) clean
						@rm -f $(OBJ)

fclean 			: 		clean
						@make -s -C $(LIBFT_PATH) fclean
						@rm -f $(NAME)

re 				: 		fclean all

.PHONY			: 		all clean fclean re