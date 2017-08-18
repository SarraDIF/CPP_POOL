RM		=	rm -rf

CPP		=	g++

CPPFLAGS	+=	-W -Wall -Werror -Wextra

NAME	=	my_cat

SRCS	=	main.cpp		\

OBJS	=	$(SRCS:.cpp=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re