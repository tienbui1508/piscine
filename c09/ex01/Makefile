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

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@
	@echo "Compiling $<"

clean:
	rm -f $(OBJS)
	@echo "Removing temporary files"

fclean: clean
	rm -f $(NAME)
	@echo "Removing binary"

re: fclean all
	@echo "Remaking all"
