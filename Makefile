NAME = minishell
CFLAGS = -Wall -Wextra -Werror -Iincludes -Ilib/libft
CC = gcc
SRC = src/prompt.c \
	  src/console.c \
	  src/handler.c \
	  src/main.c

OBJ = $(SRC:.c=.o)

LIBFT = lib/libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C lib/libft all

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LIBFT) -lreadline

clean:
	make -C lib/libft clean
	rm -rf $(OBJ)

fclean: clean
	make -C lib/libft fclean
	rm -rf $(NAME)

re: fclean $(LIBFT) $(NAME)

.PHONY: all clean fclean re