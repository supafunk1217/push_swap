NAME		=	push_swap

LIBFT 		= 	./includes/libft/libft.a

SRCS		=	main.c \
				utils.c \
				parsing.c \
				operations.c

OBJS		=	$(SRCS:.c=.o)

CC 			=	gcc 
CFLAGS 		=	-Wall -Werror -Wextra
RM			=	rm -rf
AR			=	ar rcs

all:		$(LIBFT) $(NAME)

$(LIBFT):
	@echo "Building libft... Plese wait."
	@make -C ./libraries/libft > /dev/null 2>&1

$(NAME):	$(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) ${LIBFT}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re