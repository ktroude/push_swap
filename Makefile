NAME = push_swap

SRCS = sources/libft/ft_atoi.c \
	   sources/libft/ft_putstr_fd.c \
	   sources/libft/ft_strlcpy.c \
	   sources/libft/ft_strlen.c \
	   sources/libft/ft_split.c \
	   sources/libft/ft_putnbr_fd.c \
	   sources/push_swap/parsing.c \
	   sources/push_swap/error.c \
	   sources/push_swap/swap.c \
	   sources/push_swap/rotate.c \
	   sources/push_swap/reverse.c \
	   sources/push_swap/push.c \
	   sources/push_swap/main.c \
	   sources/push_swap/algo.c \
	   sources/push_swap/algo_3n5.c \
	   sources/push_swap/algo_5_part1.c \
	   sources/push_swap/algo_5_part2.c \

		 	

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
