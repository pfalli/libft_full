NAME = libftprint.a

LIBFT = libft.a

LIBFT_PATH = ./libft

SRC =	$( \
				ft_printf_char.c \
				ft_print_string.c \
				ft_print_int.c \

	)

OBJS = $(SRC:.c=.o)

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

INC_DIR =	.

CPPFLAGS =-I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)

$(NAME):	$(OBJ) $(LIBFT)

ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -c $< -o $@