SRCS = ft_printf.c \
	   ft_printf_tools.c \
	   ft_printf_tools2.c \
	   ft_ptr_hex.c \
	   ft_put_hex.c \
	   

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

NAME = libft.a

#rules
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re
