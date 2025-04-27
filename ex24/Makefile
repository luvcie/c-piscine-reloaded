NAME = libft.a
CC = cc
SRCS_DIR = srcs
INCL_DIR = includes
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Werror -Wall -Wextra -I$(INCL_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: srcs/%.c
	cc $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all
