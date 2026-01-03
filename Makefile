NAME		= libft.a

CC		= cc
CFLAGS		= -Wall -Wextra -Werror -I include
AR		= ar rcs
RM		= rm -f

SRCS		= src/string_manipulation/ft_isalpha.c \
			  src/string_manipulation/ft_isdigit.c \
			  src/string_manipulation/ft_isalnum.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJS)
			$(AR) $@ $^

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re