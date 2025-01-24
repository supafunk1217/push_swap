NAME		=	push_swap

SRCS		=	main.c \
				utils.c \
				operations.c

OBJS		=	$(SRCS:.c=.o)

CC 			=	gcc 
CFLAGS 		=	-Wall -Werror -Wextra
RM			=	rm -rf
AR			=	ar rcs

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re