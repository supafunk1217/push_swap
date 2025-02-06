NAME	=	push_swap
LIBFT	=	./includes/libft/libft.a

SRC_DIR	=	srcs/
SRCS	=	$(SRC_DIR)main.c \
			$(SRC_DIR)stacks.c \
			$(SRC_DIR)utils.c \
			$(SRC_DIR)sorting.c \
			$(SRC_DIR)swap_push.c \
			$(SRC_DIR)rotate.c \
			$(SRC_DIR)reverse_rotate.c 

OBJS	=	$(SRCS:.c=.o)
CC 		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I./includes
RM		=	rm -rf

all: $(LIBFT) $(NAME)

$(LIBFT):
	@echo "Building libft... Please wait."
	@make -C ./includes/libft

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	@make -C ./includes/libft clean

fclean: clean
	$(RM) $(NAME)
	@make -C ./includes/libft fclean

re: fclean all

.PHONY: all clean fclean re