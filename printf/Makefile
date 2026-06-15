NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
      ft_putchar.c \
      ft_putstr.c \
      ft_putint.c \
      ft_puthexalow.c \
	  ft_puthexaupp.c \
	  ft_convert.c \
	  ft_putmemads.c \
	  ft_putunint.c 


OBJ = $(SRC:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

TEST = test

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o $(TEST)

.PHONY: all clean fclean re