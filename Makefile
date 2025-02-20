NAME	=	push_swap
LIBFT	=	./includes/libft/libft.a

SRCS	=	srcs/main.c \
			srcs/stacks.c \
			srcs/utils.c \
			srcs/sorting.c \
			srcs/operations/swap.c \
			srcs/operations/push.c \
			srcs/operations/rotate.c \
			srcs/operations/reverse_rotate.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes
RM = rm -rf

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