CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
INCLUDES_DIR = includes
SRCS = $(SRCS_DIR)/ft_putchar.c $(SRCS_DIR)/ft_swap.c $(SRCS_DIR)/ft_putstr.c $(SRCS_DIR)/ft_strlen.c $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
HEADERS = $(INCLUDES_DIR)/ft.h
NAME = libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o: $(HEADERS)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
