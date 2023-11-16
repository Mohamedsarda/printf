CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_putstr.c

OBJS = $(SRCS:.c=.o)

NAME = test.a

RM = rm -f

LIBC = ar rcs

all : $(NAME)

$(NAME) : $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o:%.c test.a
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all