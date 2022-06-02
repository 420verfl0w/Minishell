BASE_SRC		:= ft_atoi.c \
				   ft_bzero.c \
				   ft_calloc.c \
				   ft_get_words.c \
				   ft_isalnum.c \
				   ft_isalpha.c \
				   ft_isascii.c \
				   ft_isdigit.c \
				   ft_isprint.c \
				   ft_itoa.c \
				   ft_memchr.c \
				   ft_memcmp.c \
				   ft_memcpy.c \
				   ft_memmove.c \
				   ft_memset.c \
				   ft_nbrlen.c \
				   ft_putchar_fd.c \
				   ft_putendl_fd.c \
				   ft_putnbr_fd.c \
				   ft_putstr_fd.c \
				   ft_split.c \
				   ft_split_free.c \
				   ft_strchr.c \
				   ft_strdup.c \
				   ft_striteri.c \
				   ft_strcpy.c \
				   ft_strcat.c \
				   ft_strjoin.c \
				   ft_strlcat.c \
				   ft_strlcpy.c \
				   ft_strlen.c \
				   ft_strmapi.c \
				   ft_strncat.c \
				   ft_strncmp.c \
				   ft_strnstr.c \
				   ft_strrchr.c \
				   ft_strtrim.c \
				   ft_substr.c \
				   ft_strtok.c \
				   ft_strcspn.c \
				   ft_strspn.c \
				   ft_tolower.c \
				   ft_toupper.c \
				   ft_putchar.c \
				   ft_puthex.c \
				   ft_putnu.c \
				   ft_putstr.c \
				   ft_putnbr.c \
				   ft_printf.c

BONUS_SRC		:= ft_lstadd_back.c \
				   ft_lstadd_front.c \
				   ft_lstclear.c \
				   ft_lstdelone.c \
				   ft_lstiter.c \
				   ft_lstlast.c \
				   ft_lstmap.c \
				   ft_lstnew.c \
				   ft_lstsize.c

OBJ				:= $(BASE_SRC:.c=.o)
BONUS_OBJ		:= $(BONUS_SRC:.c=.o)
CFLAGS			:= -Wall -Wextra -Werror -I. -fPIC
NAME			:= libft.a

all:			$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME):		$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(BONUS_OBJ)

fclean:			clean
	$(RM) $(NAME) $(LIBSHARE)

re:				fclean $(NAME)

bonus:			$(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

.PHONY:			all clean fclean re
