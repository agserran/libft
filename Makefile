SRCS = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlen.c \
ft_strncmp.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_calloc.c \
ft_strnstr.c \
ft_strdup.c \
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_itoa.c \
ft_strmapi.c \
ft_split.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_striteri.c \

SRCSB = ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstdelone_bonus.c \
ft_lstlast_bonus.c \
ft_lstnew_bonus.c \
ft_lstsize_bonus.c \

OBJS = $(SRCS:.c=.o)

OBJDSB = $(SRCSB
NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

LIB = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS) $(LIB)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
