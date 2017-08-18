RM		=	rm -rf

CC		=	clang

CFLAGS	+=	-W -Wall -Werror -Wextra -std=gnu99

NAME	=	menger

SRCS	=	main.c		\
			menger.c	\

OBJS	=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re