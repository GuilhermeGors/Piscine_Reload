# Variáveis
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf
AR		= ar rcs
NAME	= libft.a
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= $(SRCS:.c=.o)
INCLUDES = -I includes/

# commum rule
all: $(NAME)

# lib building
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# compiling .c to .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# .o clean
clean:
	$(RM) $(OBJS)

# objects and lib clean
fclean: clean
	$(RM) $(NAME)

# Redo all
re: fclean all
